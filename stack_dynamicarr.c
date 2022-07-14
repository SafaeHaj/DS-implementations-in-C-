#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


typedef struct STACK{
    int top; //index of top element
    int *arr; //pointer to an array the user creates
    int cap;
} stack;

bool IsEmpty(stack* s);
bool IsFull(stack* s);
int top(stack* s);
int pop(stack* s);
void push(stack* s,int x);

stack* s; 
s->top = -1; s->cap = 4;
s->arr = calloc(s->cap, 2);

int main() {

    return 0;
}

//////////////////////////////////////////////////////////////

bool IsEmpty(stack* s) {
    if(s->top == -1) return true;
    else return false;
}

bool IsFull(stack* s) {
    if((s->top) == (cap-1)) return true;
    else return false;
}

int top(stack* s) {
    return s->arr[s->top];
}

int pop(stack* s) {
    if (IsEmpty(s) == false) {
        int x = s->arr[s->top];
        s->arr[s->top] = 0;
        s->top--;

        return x;
    }
}

void push(stack* s, int x) {
    if (IsFull(s) == false) {
        s->arr[s->top+1] = x;
        s->top++;
    }

    else {
        printf("\nERROR: Stack Overflow");
        //will attempt dynamic array solution in another file
    }
}

void Print(stack* s) {
    int t;
    if (IsEmpty(s) == true) {
        return;
    }
    else {
        t = pop(s);
        printf("%i |",t);
        Print(s);
        push(s,t);
    }
}