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
	int i = 0, j = 0, k = 0;
	struct node*temp = head;
	while (temp != NULL){
		if (temp->data == 0){
			i++;
		}
		else if (temp->data == 1){
			j++;
		}
		else if (temp->data == 2){
			k++;
		}
		temp = temp->next;
	}
	temp = head;
	while (i != 0){
		temp->data = 0;
		temp = temp->next;
		i--;
	}
	while (j != 0){
		temp->data = 1;
		temp = temp->next;
		j--;
	}
	while (k != 0){
		temp->data = 2;
		temp = temp->next;
		k--;
	}
	temp = NULL;
}
