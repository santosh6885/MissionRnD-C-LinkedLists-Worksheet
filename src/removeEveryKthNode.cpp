/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * removeEveryKthNode(struct node *head, int K) {
	int i = 1;
	struct node *temp;
	struct node *prev;
	if (head == NULL || K <= 0 || K == 1)
		return NULL;
	temp = head;
	prev = head;
	while (temp->next != NULL){
		i++;
		prev = temp;
		temp = temp->next;
			if (i == K){
				prev->next = temp->next;
				i = 0;
			}
			
			
	}
	return head;
	//return NULL;
}
