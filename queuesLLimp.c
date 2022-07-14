#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "SLLfcts.h"

//using linked list implementation

typedef struct {
    node* FRONT;
    node* REAR;
    int size;
} queue;

bool IsEmpty(queue* q);
//bool IsFull(queue* q);
int peek(queue* q);
void dequeue(queue* q);
void enqueue(queue* q, int x);
void PrintQ(queue* q);


int main() {
    node *head, *tail;
    head = NULL; tail = NULL;
    queue m = {tail,head,0}; queue *q = &m;

    //enqueue(q,1) ;enqueue(q,2) ;enqueue(q,3) ;enqueue(q,4) ;
    
    //PrintQ(q);
    Insert(head,1,0);
    Print(head);

    //printf("\nIs queue empty: %i", IsEmpty(q));


    return 0;
}


bool IsEmpty(queue* q) {
    if (q->size == 0) return true;
    return false;
}

int peek(queue* q) {
    return q->FRONT->data;
}

void dequeue(queue* q) {
    if (IsEmpty(q) == false) {
        Remove(q->REAR,q->size-1); //remove front
        q->FRONT = findtail(q->REAR);
        q->size--;
    }
    else printf("\nQueue is Empty");
}

void enqueue(queue* q, int x) {
    Insert(q->REAR,x,0);
    q->size++;
}

void PrintQ(queue *q){
    Print(q->REAR);
}