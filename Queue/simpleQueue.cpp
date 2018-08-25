#include <stdio.h>

#define MAXLENGHT 100
typedef int ElementType ;

typedef struct Queue {
	ElementType Element [MAXLENGHT];
	int front,rear;
} ;

void INIT_QUEUE (Queue &q){
	q.front =-1 ;
	q.rear = -1 ;
}

bool IS_QUEUE_EMPTY (Queue q) {
	return q.front == -1 ;
}

bool IS_QUEUE_FULL (Queue q) {
	return (q.rear - q.front +1) == MAXLENGHT ;
}

void DEQUEUE (Queue &q) {
	if (!IS_QUEUE_EMPTY(q)) {
		q.front = q.front+1 ;
		if (q.front > q.rear ) {
			INIT_QUEUE(q);
		} else {
			printf("ah ah !!! ");
		}
}

void ENQUEUE(Queue &q){
	if (!IS_QUEUE_FULL(q)) {
		q.front = 0;
		if (q.rear == MAXLENGHT -1) {
			for(int i=0 ;i<q.front ; i++) {
				q.Element[i-q.front]= q.Element ;
			}
			q.rear = MAXLENGHT - q.front -1 ;
			q.front =0 ;
		}
		q.rear = q.rear +1;
		q.Element[q.rear] = x ;
	}else {
		printf (" error full queue ") ;
	}
}


