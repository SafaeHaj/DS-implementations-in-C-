#ifndef STACKFCTS_H
#define STACKFCTS_H

// Stack Implementation + Functions
#define cap 20

typedef struct STACK
{
    int top;      // index of top element
    int arr[cap]; // array
} stack;

/////////////////////////////////////////////////

bool IsEmpty(stack *s)
{
    if (s->top == -1)
        return true;
    return false;
}

bool IsFull(stack *s)
{
    if ((s->top) == (cap - 1))
        return true;
    return false;
}

int top(stack *s)
{
    if (IsEmpty(s) == false)
        return s->arr[s->top];
    else
        printf("\nStack is Empty");
}

int pop(stack *s)
{
    if (IsEmpty(s) == false)
    {
        int x = s->arr[s->top];
        s->arr[s->top] = 0;
        s->top--;

        return x;
    }

    else
        printf("\nStack is Empty");
}

void push(stack *s, int x)
{
    if (IsFull(s) == false)
    {
        s->arr[s->top + 1] = x;
        s->top++;
    }

    else
        printf("\nERROR: Stack is Full");
    // will attempt dynamic array solution in another file
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