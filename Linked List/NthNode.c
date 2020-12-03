// C program to find n'th node in linked list


#include <stdio.h>
#include <stdlib.h>


struct Node {
	int data;
	struct Node* next;
};


void push(struct Node** head_ref, int new_data) {

	struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

	new_node->data = new_data;
	new_node->next = (*head_ref);
	(*head_ref) = new_node;
}


int GetNth(struct Node* head, int index) {

	struct Node* current = head;

	int count = 0;
	while (current != NULL) {
		if (count == index)
			return (current->data);
		count++;
		current = current->next;
	}
}


void main() {

	struct Node* head = NULL;

	push(&head, 1);
	push(&head, 4);
	push(&head, 1);
	push(&head, 12);
	push(&head, 1);


	printf("Element at index 3 is %d", GetNth(head, 1));
	getchar();
}