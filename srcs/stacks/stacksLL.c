#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stacksLL.h"

int main()
{
    node *head = NULL;
    stack stek;
    stek.top = -1;
    stek.stika = head;
    stack *s = &stek;

    push(s, 1);
    printf("\ntop: %i", top(s));

    push(s, 2);
    printf("\ntop: %i ", top(s));

    push(s, 3);
    printf("\ntop: %i", top(s));

    push(s, 4);
    printf("\ntop: %i\n", top(s));

    PrintS(s);
    pop(s);
    printf("\n");
    PrintS(s);

    return 0;
}

