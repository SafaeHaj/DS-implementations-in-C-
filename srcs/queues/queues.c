#include <stdio.h>
#include <stdlib.h>
#include "queues.h"

int main() {
    
    printf("Inititalizing Queue..\n");
    queue qiqa = {-1,0,{0}};
    queue* q = &qiqa;

    PrintQ(q);

    printf("\nAdding elements..");
    enqueue(q,1); printf("\n"); PrintQ(q);
    enqueue(q,2); printf("\n"); PrintQ(q);
    enqueue(q,3); printf("\n"); PrintQ(q);
    enqueue(q,4); printf("\n"); PrintQ(q);

    printf("\nRemoving elements..\n");
    dequeue(q);
    PrintQ(q);

    return 0;
}

