#ifndef STACKS_LL_H
#define STACKS_LL_H

#include "SLLfcts.h"

typedef struct STACK
{
    int top;     // index of top element
    node *stika; // LL
} stack;

/////////////////////////////////////////////////


bool IsEmpty(stack *s)
{
    if (s->top == -1)
        return true;
    return false;
}

int top(stack *s)
{
    if (IsEmpty(s) == false)
    {
        node *tip = findtail(s->stika);
        return tip->data; //(¬‿¬)
    }
    else
        printf("\nStack is Empty");
}

int pop(stack *s)
{
    if (IsEmpty(s) == false)
    {
        int v = findtail(s->stika)->data;
        Remove(&s->stika, s->top);
        s->top--;
        return v;
    }
    else
        printf("\nStack is Empty");
}

void push(stack *s, int x)
{
    if (IsEmpty(s))
        Insert(&s->stika, x, 0);

    else if (s->top == 0)
    {
        node *boi = (node *)malloc(sizeof(node));
        boi->data = x;
        boi->next = NULL;
        s->stika->next = boi;
    }
    else
        Insert(&s->stika, x, s->top);

    s->top++;
}

void PrintS(stack *s)
{
    int t;
    if (IsEmpty(s))
        return;
    else
    {
        t = pop(s);
        printf("%i |", t);
        PrintS(s);
        push(s, t);
    }
}

#endif