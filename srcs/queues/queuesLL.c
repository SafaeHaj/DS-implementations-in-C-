#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "queuesLL.h"


int main() {
    node *head, *tail;
    head = NULL; tail = NULL;
    queue m = {tail,head,0}; queue *q = &m;

    enqueue(q,1) ;enqueue(q,2) ;enqueue(q,3) ;enqueue(q,4) ;
    
    PrintQ(q);

    dequeue(q);

    PrintQ(q);


    return 0;
}


