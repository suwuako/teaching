#include "Stack.h"
#include <stdlib.h>
#include <stdio.h>

struct queue {
	LinkedList s1;
};

typedef struct queue * Queue;

Queue QueueNew(void) {
	Queue q = malloc(sizeof(struct queue));
	q->s1 = LinkedListNew();
	return q;
}

void QueueFree(Queue q) {
	LinkedListFree(q->s1);
	free(q);
}

void QueueEnqueue(Queue q, int item) {
    LinkedListAppend(q->s1, item);
}

int QueueDequeue(Queue q) {
    int ret = LinkedListPop(q->s1);
    return ret;
}
