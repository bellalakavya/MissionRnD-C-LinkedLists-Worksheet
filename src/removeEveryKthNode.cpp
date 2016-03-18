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
	struct node*temp,*previous;
	temp = head;
	previous = head;
	int count;
	count = K;
	if (K <=1)
		return NULL;
	else if (head == NULL){
		return NULL;
	}
	else if (head != NULL&&K > 1){
		while (temp != NULL){
			if (count != 1){
				previous = temp;
				temp = temp->next;

				count--;
			}
			else {
				previous->next = temp->next;
				temp->next = NULL;
				temp = previous->next;
				count = K;
			}
		}
	}
	return head;
}