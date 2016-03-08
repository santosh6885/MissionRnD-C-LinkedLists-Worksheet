/*
OVERVIEW:  Given a number convert that to single linked list (each digit as a node).
E.g.: Input: 234, Output: 2->3->4.

INPUTS:  A number.

OUTPUT: Create linked list from given number, each digit as a node.

ERROR CASES: 

NOTES: For negative numbers ignore negative sign.
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
};

struct node * numberToLinkedList(int N) {
	int t;
	struct node *temp, *prev = NULL , *head;
	if (N < 0)
		N = -N;
	if (N == 0){
		temp = (struct node *)malloc(sizeof(struct node));
		temp->num = N;
		temp->next = NULL;
		head = temp;
	}
	else{
		while (N){
			t = N % 10;
			temp = (struct node *)malloc(sizeof(struct node));
			temp->num = t;
			temp->next = prev;
			prev = temp;
			N = N / 10;
		}
		head = prev;
	}
	return head;
	
	

	//return NULL;
}