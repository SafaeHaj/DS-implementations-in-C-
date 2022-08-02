#include <stdio.h>
#include <stdlib.h>
#include "sort_reverseLL.h"

int main()
{   
    node* a1 = (node*)(malloc(sizeof(node)));
    node* a2 = (node*)(malloc(sizeof(node)));
    node* a3 = (node*)(malloc(sizeof(node)));
    node* a4 = (node*)(malloc(sizeof(node)));
    node* a5 = (node*)(malloc(sizeof(node)));
    node* a6 = (node*)(malloc(sizeof(node)));

    a1->next = a2;  a1->data = 7;
    a2->next = a3;  a2->data = 5;
    a3->next = a4;  a3->data = 13;
    a4->next = a5;  a4->data = 10;
    a5->next = a6;  a5->data = 3;
    a6->next = NULL;a6->data = 1;

    head = a1;

    printf("Initial Linked List:");
    Print(head);

    printf("\n\nReversing Linked List..");
    Reverse(&head);
    Print(head);
    
    printf("\n\nSorting Linked List..");
    Sort(&head);
    Print(head);

    return 0;
}

