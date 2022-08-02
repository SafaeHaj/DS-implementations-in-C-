#include "linkedlists.h"

//using linked list implementation

typedef struct {
    node* FRONT;
    node* REAR;
    int size;
} queue;

/////////////////////////////////////////////////

bool IsEmpty(queue* q) {
    if (q->size == 0) return true;
    return false;
}

int peek(queue* q) {
    return q->FRONT->data;
}

void dequeue(queue* q) {
    if (IsEmpty(q) == false) {
        Remove(&(q->REAR),q->size-1); //remove front
        q->FRONT = findtail(q->REAR);
        q->size--;
    }
    else printf("\nQueue is Empty");
}

void enqueue(queue* q, int x) {
    Insert(&(q->REAR),x,0);
    q->size++;
}

void PrintQ(queue* q){
    Print(q->REAR);
}