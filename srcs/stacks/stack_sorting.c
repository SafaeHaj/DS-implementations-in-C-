#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stacks.h"

int main()
{   
    int i,j;
    stack staki; staki.top = -1;
    stack *s = &staki;

    printf("Enter stack size (must be between 2 and 20):\n");
    scanf("%i", &i);

    if (i <= 20 && i >= 2)
    {
        printf("Enter stack elements:\n");
        while (i != 0)
        {
            scanf("%i", &j);
            push(s, j);
            i--;
        }
    }
    else return 0;

    stack han; 
    han.top = -1;
    stack *h = &han;

    int xS, xH;

    printf("Initial Stack:\n");
    PrintS(s);

    while (IsEmpty(s) == false)
    {
        xS = pop(s);
        while (IsEmpty(h) == false && top(h) > xS)
        {
            xH = pop(h);
            push(s, xH);
        }
        push(h, xS);
    }

    printf("\nSorted Stack:\n");
    PrintS(h);

    // initial idea :
    /*
    for(int j = 0;j<4;j++) {
        //4 : size of array
        //it could be made better by picking a var = size_of_stack
        for(int i = 0; i<4;i++) {
            if (s->arr[i]<s->arr[i+1]) continue;

            else {
                while (IsEmpty(h) == false) {
                    xH = pop(h);
                    push(s,xH);
                }
                while (IsEmpty(s) == false) {
                    //look for minimum at each iteration
                    xS = pop(s);
                    push(h,xS);

                    printf("\n Staki: ");
                    Print(s);
                    printf("\n Hanoi: ");
                    Print(h);
                    if(top(h)<top(s)) continue;

                    else {
                        xH = pop(h);
                        xS = pop(s);
                        push(h,xS);
                        push(s,xH);
                        }
                }
            }
        }
    }*/

    return 0;
}