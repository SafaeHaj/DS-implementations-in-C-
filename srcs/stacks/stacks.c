#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stacks.h"

int main()
{
    printf("Initializing Stack..\n");
    printf("Stack Capacity: %i\n",cap);

    stack st;
    st.top = -1;
    stack *s = &st;

    printf("Pushing Elements into Stack..\n");
    push(s, 1);
    push(s, 2);
    push(s, 3);

    PrintS(s);
    printf("\ntop of stack: %i", top(s));

    printf("Popping Elements from Stack..\n");
    pop(s); pop(s);

    printf("\n");
    PrintS(s);

    // check if stack is empty
    int e = IsEmpty(s);
    if (e == 1)
        printf("\nStack is empty");
    else
        printf("\nStack isn't empty");

    push(s,1); push(s,5); push(s,1); push(s,7); push(s,1); push(s,4); push(s,1);
    push(s,2); push(s,8); push(s,1); push(s,3); push(s,18); push(s,1); push(s,1);
    push(s,6); push(s,10); push(s,1); push(s,1); push(s,9); 

    // check if stack is full
    int f = IsFull(s);
    if (f == 1)
        printf("\nStack is full\n");
    else
        printf("\nStack isn't full\n");

    PrintS(s);

    return 0;
}