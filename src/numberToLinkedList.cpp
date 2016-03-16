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
	struct node*head=NULL;
	struct node*nnode=head;
	int r;
	if (N == 0){
		nnode = (struct node*)malloc(sizeof(struct node));
		nnode->num = N;
		nnode->next = NULL;
		head = nnode;
	}
	else{
		if (N < 0){
			N = -N;
		}
		while (N !=0){
			nnode = (struct node*)malloc(sizeof(struct node));
			nnode->num = N % 10;
			if (head == NULL){
				head = nnode;
				nnode->next = NULL;
			}
			else{
				nnode->next = head;
				head = nnode;
			}
			N = N / 10;
		}
	}
	return head;

}