/*
OVERVIEW: Given an unsorted single linked list, sort the linked list without using extra array or linked list.
E.g.: 4->2->1->5->3, output is 1->2->3->4->5.

INPUTS: An unsorted single linked list.

OUTPUT: Sort the linked list.

ERROR CASES: Return NULL for error cases.

NOTES: Without using extra array or linked list.
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};
void swap(struct node *a, struct node *b);
struct node * sortLinkedList(struct node *head) {
	struct node *temp,*curr,*temp2=head;
	if (head == NULL)
		return NULL;
	temp = head->next;
	curr = head;
	while (curr != NULL){
		temp = curr->next;
		while (temp != NULL){
			if ((curr->num) > (temp->num)){
				swap(curr, temp);
			}
			temp = temp->next;
				
			
		}
		curr = curr->next;
		
		
	}
	return temp2;
	//return NULL;
}
void swap(struct node *a, struct node *b){
	int temp;
	temp = a->num;
	a->num = b->num;
	b->num = temp;
}