#include <stdio.h>
#include <stdlib.h>
#include "SLLfcts.h"
#include "sort_reverseLL.h"

/*
Singly Linked List Structure:
    typedef struct nodey{
            int data;
            struct nodey *next;
        } node;

    node *head
*/

int main() {
    node *one, *two, *three;
    int x;

    one = malloc(sizeof(node)); two = malloc(sizeof(node)); three = malloc(sizeof(node));

    /* 
    when dealing with pointers in structures
    accessing struct elements can be done either by writing:
    1-  (*pointer).variable = value (forceconvert pointer type)
    OR
    2-  pointer->variable = value
    */
    
    one->data = 1 ; one->next = two;
    two->data = 2 ; two->next = three;
    three->data = 3; three->next = NULL;

    head = one;
    Insert(head,25,1); Insert(head,7,2); Insert(head,0,4);

    setel(head, 5);
    //printf("\n%i", one->data);

    x = getel(head);
    //printf("\n%i", x);

    //Print(head); 
    //Remove(0);
    //Remove(4); Print(head);

    Print(head);
    Reverse(head);

    //Print(head);
    //Sort(head);
    Print(head);
    
    
    return 0;
}
