#include<stdio.h>
#include <stdlib.h>


struct Node{
	int data;
	Node* next;
} typedef struct Node*;

void insert_to_head(int **ll,int  n){
	// changing the pointer to another head
	// because we have to change the pointer, we pass the address of the pointer
	temp = (Node*)malloc(sizeof(Node*));
	temp->data = n;
	temp->next = *ll;
	*ll -> next = temp;
	return;
}

void print_ll_in_reverse(int *ll){
	// 4-> 3-> 5->10->NULL
	if (*ll->data != NULL){
		return;
	print_ll_in_reverse(ll->next);		
	print(ll->data);
	return;	
}
}



