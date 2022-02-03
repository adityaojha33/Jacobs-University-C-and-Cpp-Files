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
        Node *tmp;
        tmp = malloc(sizeof(Node));
        tmp->item = item;
        tmp->next = NULL;
        if(!queue_is_empty(pq))
        {
            pq->rear->next = tmp;
            pq->rear = tmp;
        }
        else
        {
            pq->front = pq->rear = tmp;
        }
        pq->items++;
    }
    return 0;
}

int dequeue(Item *pitem, Queue *pq)
{
	// add missing stuff
        return 0;
}

void empty_queue(Queue *pq)
{
	Item dummy;
	while (!queue_is_empty(pq)) {
		dequeue(&dummy, pq);
	}
}
