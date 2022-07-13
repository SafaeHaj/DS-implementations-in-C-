// Stack Implementation + Functions

#define cap 20 //capacity of the stack

typedef struct STACK{
    int top; //index of top element
    int arr[cap]; // array
} stack;


//for this first trial on stacks i will be going with arrays, might attemps LLs later on

bool IsEmpty(stack* s) {
    if(s->top == -1) return true;
    else return false;
}

bool IsFull(stack* s) {
    if((s->top) == cap-1) return true;
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
        /*
        cap = 2*cap; int y;
        //i originally only wanted the stack->array to be dynamic but that didnt work so whole struct it is
        //UPDATE: neither works and the only solution i found online was using C++ specific stuff :)))

        stack* new_s = (stack*)(malloc(sizeof(stack)+cap*2)); //int size == 2 bytes
        
        while(IsEmpty(s) == false) {
            y = pop(s);
            push(new_s,y);
        }
        free(s);
        s = new_s;
        push(s,x);*/
        printf("\nERROR: Stack is FULL");
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