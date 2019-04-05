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
/*void reverse_list(){
	

}*/
int main(){
	int * arr = malloc(sizeof(int) * 10);
        for(int i = 0; i < 10; i++)
		arr[i] = i;
	reverse_array(arr, 10);
	for(int i = 0; i < 10; i++)
		printf("%d ", arr[i]);	
	Node a; Node b; Node c;
	a->value = 1; 
	a->next = b;
	b.value = 2;
	b.next = c;
	c.value = 3;
	c.next = NULL;
	
	return 0;	
}
