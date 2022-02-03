/*
CH-230-A
a8_p3.c
Aditya Ojha
ad.ojha@jacobs-university.de
*/
/**
 * @file queue.c
 */

#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

void initialize_queue(Queue *pq)
{
	pq->front = pq->rear = NULL;
	pq->items = 0;
}

int queue_is_full(const Queue *pq)
{
	return pq->items == MAXQUEUE;
}

int queue_is_empty(const Queue *pq)
{
	return pq->items == 0;
}

int queue_item_count(const Queue *pq)
{
	return pq->items;
}

int enqueue(Item item, Queue *pq)
{
	if (pq->items != MAXQUEUE)
    {
         /*when queue is not full*/
        Node *tmp;
        tmp = malloc(sizeof(Node));
        tmp->item = item; /*assigning value as temporary*/
        tmp->next = NULL;
        if(!queue_is_empty(pq))
        {
            /*when a first value is assigned to an empty queue*/
            pq->rear->next = tmp;
            pq->rear = tmp;
        }
        else
        {
            /*when queue already has items*/
            pq->front = pq->rear = tmp;
        }
        pq->items++; /*increasing the number of elements*/
    }
    return 0;
}

int dequeue(Item *pitem, Queue *pq)
{
    Node * temp;

    int x = pq -> front -> item; /*assigning the value to return to know which item is dequeued*/
    temp = pq -> front;
    /*getting rid of the first element*/
    pq -> front = pq -> front -> next;
	pq -> items--; /*decreasing the number of elements*/
	free(temp);

	return x;
}

void empty_queue(Queue *pq)
{
	Item dummy;
	while (!queue_is_empty(pq)) {
		dequeue(&dummy, pq);
	}
}

void printq(Queue *pq)
{
    Node* first;

	first = pq -> front;

	/*looping till the end of queue.*/
	while(first != NULL){

		/*Print the element position by position*/
		printf("%d ", first -> item);

		/*going to the next element*/
		first = first -> next;

	}

	printf("\n");
}
