// Queue DS Implementation:
#ifndef QUEUES
#define QUEUES
#define cap 10

typedef struct {
    int FRONT; //idx of front value
    int size; //size of queue
    int arr[cap]; 
} queue;

/////////////////////////////////////////////////

int IsEmpty(queue *q) {
    return q->size == 0;
}

int IsFull(queue *q) {
    return q->size == cap;
}

int peek(queue *q) {
    return q->arr[q->FRONT];
}

void enqueue(queue* q,int x) {
    if (IsFull(q)) {
        printf("\nQueue is Full"); return;
    }

    if (IsEmpty(q) == 0) {
        for (int i=q->size-1;i>=-1;i--) {
            q->arr[i+1] = q->arr[i];
        }
    }
    
    q->arr[0] = x;
    q->FRONT++;
    q->size++;
}

void dequeue(queue* q) {
    if (IsEmpty(q)) {
        printf("\nQueue is Empty"); return;
    }
    q->arr[q->FRONT] = 0;
    q->FRONT--;
    q->size--;
}

void PrintQ(queue* q) {
    if (IsEmpty(q)) return;

    for(int i=0; i<q->size;i++) {
        printf("%2i |", q->arr[i]);
    }
}

#endif

