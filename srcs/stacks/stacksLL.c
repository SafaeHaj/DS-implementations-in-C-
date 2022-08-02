#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stacksLL.h"

int main()
{
    printf("Initializing Stack..\n");
    node *head = NULL;
    stack stek;
    stek.top = -1;
    stek.stika = head;
    stack *s = &stek;

    printf("Pushing Elements into Stack..\n");
    push(s, 1);
    push(s, 2);
    push(s, 3);
    push(s, 4);

    printf("top: %i\n", top(s));

    PrintS(s);

    printf("\nPopping Elements from Stack..\n");
    pop(s); pop(s);
    
    PrintS(s);

    return 0;
}

