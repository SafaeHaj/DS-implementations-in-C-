#include <stdio.h>
#include <stdlib.h>
#include "linkedlists.h"

int main()
{
    node *one, *two, *three;
    int x;

    one = (node*)(malloc(sizeof(node)));
    two = (node*)(malloc(sizeof(node)));
    three = (node*)(malloc(sizeof(node)));

    printf("Initializing Linked List, starting with 3 nodes:\n");
    
    printf("Head node:\n")  ; scanf("%i",&one->data);
    printf("Second node:\n"); scanf("%i",&two->data);
    printf("Tail node:\n")  ; scanf("%i",&three->data);
    
    one->next = two;
    two->next = three;
    three->next = NULL;

    head = one;

    printf("Current Linked List:"); Print(head);

    printf("\nTesting Linked List Functions:\nInserting Values..\nNew List:");
    
    Insert(&head, 25, 1);
    Insert(&head, 7, 2);
    Insert(&head, 0, 4);

    setel(head,head, 5); 

    Print(head);
    
    printf("\nDeleting Values..\nNew List:\n");
    Remove(&head, 0);
    Remove(&head, 4);
    Print(head);
    printf("\nsize: %i\n", getsize(head));

    // node *head2 = NULL;
    // printf("size: %i", getsize(head2));
    // Insert(&head2, 1, 0);
    // printf("\nsize: %i", getsize(head2));
    
    return 0;
}
