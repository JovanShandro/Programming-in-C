/*
	JTSK-320112
	a5 p4.c
	Jovan Shandro
	jshandro@jacobs-university.de
*/

/**
 * @file queue.c
 */

#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

static void copy_to_node(Item item, Node *pn);
//static void copy_to_item(Node *pn, Item *pi);

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
	// add missing stuff
	if(queue_is_full(pq))
		return -1;
	Node* n = (Node*) malloc(sizeof(Node));
	if(!n)
		return -1;
	copy_to_node(item, n);
	n->next = NULL;
	if(queue_is_empty(pq))
	{
		pq->front = n;
	}else
	{
		pq->rear->next = n;
	}
	pq->rear = n;
	pq->items++;
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

static void copy_to_node(Item item, Node *pn)
{
	pn->item = item;
}

/*
static void copy_to_item(Node *pn, Item *pi)
{
	*pi = pn->item;
}
*/