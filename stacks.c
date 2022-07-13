#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stackfcts.h"


int main() {
    stack st = {-1, {1,2}};
    stack *s = &st;

    push(s,1); push(s,2); push(s,3); 

    Print(s);
    printf("\ntop of stack: %i",top(s));

    pop(s);
    
    printf("\n");
    Print(s);
    printf("\ntop of stack: %i",top(s));

    //check if stack is empty
    int e = IsEmpty(s);
    if (e == 1) printf("\nStack is empty");
    else printf("\nStack isn't empty");

    //check if stack is full
    int f = IsFull(s);
    if (f == 1) printf("\nStack is full");
    else printf("\nStack isn't full");

    return 0;
}