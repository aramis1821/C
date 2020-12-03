// A complete working C program to demonstrate all insertion methods on Linked List 

#include <stdio.h> 
#include <stdlib.h> 


struct Node { 
	int data; 
	struct Node *next; 
}; 


void addToFront(struct Node** head_ref, int new_data) { 
	struct Node* new_node = (struct Node*) malloc(sizeof(struct Node)); 

	new_node->data = new_data; 
	new_node->next = (*head_ref); 

	(*head_ref) = new_node; 
} 


void insertAfter(struct Node* prev, int new_data) { 

	if (prev == NULL) { 
		printf("Previous node cannot be NULL"); 
		return; 
	} 

	struct Node* new_node = (struct Node*) malloc(sizeof(struct Node)); 

	new_node->data = new_data; 
	new_node->next = prev->next; 
	prev->next = new_node; 
} 


void addToBack(struct Node** head_ref, int new_data) { 

	struct Node* new_node = (struct Node*) malloc(sizeof(struct Node)); 

	struct Node *last = *head_ref;  
	new_node->data = new_data; 
	new_node->next = NULL; 

	if (*head_ref == NULL) { 
		*head_ref = new_node; 
		return; 
	} 

	while (last->next != NULL) 
		last = last->next; 

	last->next = new_node; 
	return; 
} 


void printList(struct Node *node) { 
	while (node != NULL) 
	{ 
		printf(" %d ", node->data); 
		node = node->next; 
	} 
} 

void main() { 

	struct Node* head = NULL; 
	addToBack(&head, 0); 
	addToFront(&head, 1); 
	addToFront(&head, 2); 
	addToBack(&head, 3); 
	insertAfter(head->next, 4); 

	printf("\n Created Linked list is: "); 
	printList(head); 
	
} 
