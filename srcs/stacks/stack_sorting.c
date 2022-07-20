#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stackfcts.h"

int main()
{
    stack staki = {3, {1, 8, 9, 8}};
    stack *s = &staki;
    
    stack han; 
    han.top = -1;
    stack *h = &han;

    int xS, xH;

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

    printf("\nHan: ");
    PrintS(h);
    printf("\n%i", top(h));

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