// A complete working C++ program to find size of doubly linked list. 

#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node *next;
    struct Node *prev; 
};
 

void push(struct Node** head_ref, int new_data) {

	struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));

	new_node->data = new_data;
	new_node->prev = NULL;
	new_node->next = (*head_ref); 

	if((*head_ref) != NULL)
	    (*head_ref)->prev = new_node ; 

	(*head_ref) = new_node;
}


int findSize(struct Node *node) { 
    int res = 0; 
    while (node != NULL) { 
        res++; 
        node = node->next; 
    } 
    return res; 
} 



void main() { 
	struct Node* head = NULL; 
	push(&head, 4); 
	push(&head, 3); 
	push(&head, 2); 
	push(&head, 1); 
	printf("%d ", findSize(head)); 

} 
