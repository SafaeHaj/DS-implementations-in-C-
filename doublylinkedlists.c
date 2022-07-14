#include <stdio.h>
#include <stdlib.h>
#include "DLLfcts.h"
/*
Doubly Linked List structure
    typedef struct nodey{
            int data;
            struct nodey *prev;
            struct nodey *next;
        } node;

node *head; node *tail;

✨core functions✨ of Doubly Linked Lists
    int  getel(node* x);
    void setel(node* x, int val);

    void InsertbHead(int x, int loc);
    void InsertbTail(int x, int loc);

    void RemovebHead(int x);
    void RemovebTail(int x);

    void Print(node* start);
    void ReversePrint(node* start);
*/

int main() {
    node *one, *two, *three;
    int x;

    one = malloc(sizeof(node)); two = malloc(sizeof(node)); three = malloc(sizeof(node)); 
    one->data = 1 ; one->prev = NULL ; one->next = two; 
    two->data = 2 ; two->prev = one  ; two->next = three;
    three->data = 3 ; three->prev = two ; three->next = NULL;

    head = one; tail = three;
    
    //ReversePrint(tail);

    InsertbHead(0,0); InsertbHead(4,1);
    Print(head);
    
    printf("\nsize: %i", getsize(head));

    InsertbTail(7,-2); InsertbTail(0,-1); //loc is a negative value for tail
    Print(head);

    RemovebHead(1); Print(head);
    RemovebTail(-2);Print(head);
    printf("\nsize: %i", getsize(head));
    //x = getel(tail);
    //printf("\n%i", x);
    //setel(head, 5);
    //setel(tail,10);
    //printf("\ntail :%i", tail->data);
    return 0;
}
