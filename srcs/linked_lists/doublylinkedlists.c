#include <stdio.h>
#include <stdlib.h>
#include "doublylinkedlists.h"


int main()
{
    node *one, *two, *three;
    int x;

    printf("Initializing Doubly Linked List, starting with 3 nodes:\n");
    one = malloc(sizeof(node));
    two = malloc(sizeof(node));
    three = malloc(sizeof(node));

    printf("Head node:\n")  ; scanf("%i\n",&one->data);
    printf("Second node:\n"); scanf("%i\n",&two->data);
    printf("Tail node:\n")  ; scanf("%i\n",&three->data);
    
    one->prev = NULL;
    one->next = two;
    
    two->prev = one;
    two->next = three;
    
    three->prev = two;
    three->next = NULL;

    head = one;
    tail = three;
    
    printf("Current Doubly Linked List:\n"); Print(head);

    printf("Testing Doubly Linked List Functions:\nInserting Values..\nNew List:\n");


    InsertbHead(0, 0);
    InsertbHead(4, 1);
    //Print(head);


    InsertbTail(7, -2);
    InsertbTail(0, -1); // loc is a negative value for tail
    Print(head);
    printf("\nsize: %i", getsize(head));

    printf("Deleting Values..\nNew List:\n");
    
    RemovebHead(1);
    RemovebTail(-2);
    
    Print(head);
    printf("\nsize: %i\n", getsize(head));

    printf("Testing Reverse Print\n");
    ReversePrint(tail);

    
    return 0;
}
