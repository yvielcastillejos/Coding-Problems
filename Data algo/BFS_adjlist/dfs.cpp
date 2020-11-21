#include<iostream>
#include <list>

using namespace std;

class Graph{
private:
	// Number of vertices
	int V;
	// Pointer to adjacency list
	list<int> *adj;

public:
	// construct a prototype
	Graph(int v);
	// Method to add an edge
	void addEdge(int v, int w);
	// METHOD FOR BFS TRAVERSAL GIVE A SOURCE S
	void BFS(int s);
};

// Constrctuter with the number of vertices
Graph::Graph(int v){

	//set number of verticest
	V = v;
	// Create new adjacency list
	adj = new list<int>[v];
}

// implementation to add edges

void Graph::addEdge(int v, int w){
	adj[v].push_back(w)
}

// PErforms BFS given a starting vertex

void Graph::BFS(int s){
	// Start with all vertices as not visited
	bool *visited = new bool[V];
	for (int i =0; i<V; i++){
		visited[i] = false;
	}
	// create a queue for BFS
	list<int> queue;
	// Starting vertex marked as true
	visited[s] = true;
	queue.push_back(s);
	while(!queue.empty()){
		// Get the front of the que and remove it
		s = queue.front();
		queue.pop_front();
		cout << s << endl;
		// from beginning to end of adjacency list
		for (auto i = adj[s].begin(); i != adj[s].end(); i++){
			// as opposed to trees we need a visited here
			if (!visited[*i]){
				// the names are numbers so the index corresponds to the names
				queue.push_back(*i);
				visited[*i] = true;
			}
		}
	}
}

int main(){
	Graph g(6);
	g.addEdge(0,1);
	g.addEdge(0,2);

	g.addEdge(1,0);
	g.addEdge(1,3);
	g.addEdge(1,4);

	g.addEdge(2,0);
	g.addEdge(2,4);

	g.addEdge(3,1);
	g.addEdge(3,4);
	g.addEdge(3,5);
	
	g.addEdge(4,1);

	g.addEdge(5,3);

	// Perform BFS and print result
	g.BFS(2);
}
