/*
OVERVIEW:  Given a single linked list of 0s 1s and 2s ,Sort the SLL such that zeroes 
will be followed by ones and then twos.


INPUTS:  SLL head pointer

OUTPUT: Sorted SLL ,Head should Finally point to an sll of sorted 0,1,2


ERROR CASES:

NOTES: Only 0,1,2, will be in sll nodes
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int data;
	struct node *next;
};

void sll_012_sort(struct node *head){
	struct node *temp;
	temp = head;
	int n1=0, n2=0, n3=0;
	while (temp != NULL){
		if (temp->data == 0)
			n1++;
		else if (temp->data == 1)
			n2++;
		else
			n3++;
		temp = temp->next;
	}
	temp = head;
	while (temp != NULL){
		if (n1 != 0){
			temp->data = 0;
			n1--;
			temp = temp->next;
		}
		else if (n2 != 0){
			temp->data = 1;
			n2--;
			temp = temp->next;
		}
		else if(n3!=0){
			temp->data = 2;
			n3--;
			temp = temp->next;

		}
			
	}
	
}