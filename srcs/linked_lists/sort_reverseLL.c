#include <stdio.h>
#include <stdlib.h>
#include "s_r_LL.h"

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

    Print(head);
    Reverse(head);

    Print(head);
    Sort(&head);
    Print(head);

    printf("\n%i", getel(middle(head)));

    return 0;
}

