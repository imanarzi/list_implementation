#include <stdio.h>
#include <stdlib.h>
typedef struct node{
	int value;
	struct node * next;
}Node;
void reverse_array(int * arr, int size){
	for(int i = 0; i < size/2; i++){
		int temp = arr[i];
		arr[i] = arr[size - i - 1];
		arr[size - i - 1] = temp;
	}
}
Node * reverse_list(Node * head){
	Node * curr = head;
	Node * prev = NULL;
	Node * next = NULL;
	while(curr != NULL){
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	return prev;
		

}
int main(){
	//initialize array
	int * arr = malloc(sizeof(int) * 10);
        for(int i = 0; i < 10; i++)
		arr[i] = i;
	//reverse array and print results
	reverse_array(arr, 10);
	for(int i = 0; i < 10; i++)
		printf("%d ", arr[i]);
	printf("\n");	
	free(arr);
	
	//initialize 3 nodes of a linked list
	Node* a = malloc(sizeof(Node)); Node* b = malloc(sizeof(Node)); Node* c = malloc(sizeof(Node));
	a->value = 1; 
	a->next = b;
	b->value = 2;
	b->next = c;
	c->value = 3;
	c->next = NULL;
	
	//reverse linked list and print
	a = reverse_list(a);	
	Node* p  = a;
	while(p){
		printf("%d ", p->value);
		Node * x = p;
		free(x);
		p = p->next;
	}	
	printf("\n");
	return 0;	
}
