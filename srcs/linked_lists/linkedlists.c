#include <stdio.h>
#include <stdlib.h>
#include "SLLfcts.h"

int main()
{
    node *one, *two, *three;
    int x;

    one = (node*)(malloc(sizeof(node)));
    two = (node*)(malloc(sizeof(node)));
    three = (node*)(malloc(sizeof(node)));

    one->data = 1;
    two->data = 2;
    three->data = 3;
    one->next = two;
    two->next = three;
    three->next = NULL;

    head = one;
    Insert(&head, 25, 1);
    Insert(&head, 7, 2);
    Insert(&head, 0, 4);

    setel(head, 5);
    printf("\n%i", one->data);

    x = getel(head);
    printf("\n%i", x);

    Print(head);
    Remove(head, 0);
    Remove(head, 4);
    Print(head);

    node *head2 = NULL;
    printf("size: %i", getsize(head2));
    Insert(&head2, 1, 0);
    printf("\nsize: %i", getsize(head2));

    return 0;
}
