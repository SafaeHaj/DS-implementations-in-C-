#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "SLLfcts.h"

typedef struct STACK{
    int top; //index of top element
    node* stika; //LL
} stack;

bool IsEmpty(stack* s);
int top(stack* s);
int pop(stack* s);
void push(stack* s, int x);
void PrintS(stack* s);


int main() {
    node* head = NULL;
    stack stek; stek.top = -1; stek.stika = head;
    stack *s = &stek;

    push(s,1); printf("\ntop: %i", top(s));

    push(s,2); printf("\ntop: %i ", top(s));

    push(s,3); printf("\ntop: %i", top(s));

    push(s,4); printf("\ntop: %i\n", top(s));

    PrintS(s);
    pop(s);
    printf("\n");
    PrintS(s);

    return 0;
}


bool IsEmpty(stack* s) {
    if (s->top == -1) return true;
    return false;
}

int top(stack* s) {
    if (IsEmpty(s) == false) {
        node* tip = findtail(s->stika);
        return tip->data; //(¬‿¬)
    }
    else printf("\nStack is Empty");
}

int pop(stack* s) {
    if (IsEmpty(s) == false) {
        int v = findtail(s->stika)->data;
        Remove(&s->stika,s->top);
        s->top--;
        return v;
    }
    else printf("\nStack is Empty");
}

void push(stack* s, int x) {
    if (IsEmpty(s)) Insert(&s->stika,x,0);

    else if (s->top == 0) {
        node* boi = (node*)malloc(sizeof(node));
        boi->data = x; boi->next = NULL;
        s->stika->next = boi;
    }
    else Insert(&s->stika,x,s->top);
    
    s->top++;
}

void PrintS(stack* s) {
    int t;
    if (IsEmpty(s)) return;
    else {
        t = pop(s);
        printf("%i |",t);
        PrintS(s);
        push(s,t);
    }
}