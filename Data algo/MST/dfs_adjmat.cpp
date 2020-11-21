#include <iostream>
using namespace std;

class queue{
	private:
		int V;
		int *q;
		int front = -1;
	public:
		queue();
		void push(int n);
		void pop();
		int front();
		bool isEmpty();
}

queue::queue(){
	// make a queue of size 100
	V = 100;
	q = new q[V];
}

void queue::push(int n){
	// add element in queue
	if (front < V){
		++front;
		q[front] = n;
	else{
		cout<<"QUEUE OVERFLOW"<<endl;
	}
		

void queue::pop(void){
	if (this->isEmpty()){
		cout<<"The list is empty nothing to pop"<<endl;
	}
	else{
		front--;
	}

int queue::front(void)
	if (this->isEmpty()){
		return NULL;
}
	else{
	int temp = q[front];
	front--;
	return temp;}

bool queue::isEmpty(void){
	if (temp == -1){
		return true;
	}
	else{
		return false;
}

void BFS( int (*G)[5], m, n){
	// Construct Visited
	bool visited[V];
	for (int i = 0; i<n; i++){
		visited[i] = false;
	}
	queue q;
	// We visit the first element
	visited[0] = true;
	q.push(0);
	while (!q.isEmpty()){
		s = q.front();
		q.pop();
		cout<<s<< "->";
		for (int i = 0; i<m; i++){
			if (G[s][i] != 0 && !visited[i]){
				q.push(i);
				visited[i] = true;
			}
		}	
	}
	return;
}

int main(){
	int G[5][5] ={
         //0,1,2,3,4
  /*0*/   {0,4,0,5,2},
  /*1*/   {4,0,1,3,0},
  /*2*/   {0,1,0,8,0},
  /*3*/   {5,3,8,0,2},
  /*4*/   {2,0,0,2,0}
  };
  
	m = 5;
	n = 5;
	BFS(G, 5, 5);
	return 0;
}

