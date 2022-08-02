#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include "stacks.h"

int main()
{
    char exp[20];
    int i = 0, x, y;
    stack st;
    st.top = -1;
    stack *s = &st;

    // taking the expression to evaluate
    printf("Enter expression: \n");
    gets(exp);

    while (exp[i] != '\0')
    {
        // check if number is operand or operator and perform accordingly
        if (isdigit(exp[i]))
        {
            int z = exp[i];
            push(s, z - '0');
        }

        else
        {
            x = pop(s);
            y = pop(s);

            switch (exp[i])
            {
            case '+':
                push(s, x + y);
                break;
            case '-':
                push(s, x - y);
                break;
            case '*':
                push(s, x * y);
                break;
            case '/':
                push(s, x / y);
                break;

            default:
                printf("\nERROR: Enter Valid Operand");
            }
        }
        PrintS(s);
        printf("\n");
        i++;
    }

    printf("\nOperation: %s\nResult: %i", exp, pop(s));

    return 0;
}