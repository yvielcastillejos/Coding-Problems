#include<iostream>
#include<cstring>
using namespace std;

#define V 5
#define HIGH 999999

int main(){
	int G[V][V] ={
       //0,1,2,3,4
/*0*/	{0,4,0,5,2},
/*1*/   {4,0,1,3,0},
/*2*/   {0,1,0,8,0},
/*3*/   {5,3,8,0,2},
/*4*/   {2,0,0,2,0}
};


/*
		       4
		      >^
                     / |
                    /  |
		   2   2
		  /    |
                 /     |
                /      v
               3 <-5-> 0 
	       |\      ^
               | \     |
               |  3    4
               8   \   |
               |    \  |
               |     \ v
               2 <-1-> 1
*/


/* VISITED ARRAY | changes to true after it is visited*/
int v_array[V];

// Initialize all positions as false
memset(v_array, false, sizeof(v_array));

// start at the 0-th index
v_array[0] = true;

// print the edge: weight

cout<< "EDGE:WEIGHT"<< endl;
// E = V-1,  we have 4 edges
int n_edges = 0;
while (n_edges < V-1){
	int min = HIGH;
	int r=0, c=0;
	// traversal along the row to pick every vertex
	for (int i = 0; i < 5; i++){
		// create two for loops that runs thru the whole matrix
		if (v_array[i]){ 
			for (int j=0; j<5; j++){
				if (min > G[i][j]){
					if (!v_array[j] && G[i][j]){
						min = G[i][j];
						r = i;
						c = j;}
				}
			}
		}
	}

	cout<<" "<<r<<"-"<<c<<":"<<G[r][c];
	cout<< endl;
	v_array[c] = true;
	n_edges++;
}

return 0;
}






