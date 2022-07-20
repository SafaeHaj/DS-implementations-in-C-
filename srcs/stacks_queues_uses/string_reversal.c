#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stackfcts.h"

int main() {
    //reversing a string
    char str[] = "Hello World!", new_str[20];
    int i = 0, j = 0;
    stack ss; ss.top = -1; stack *s = &ss;

    printf("%s\n",str);

    while(*(str+i) != '\0') {
        push(s,*(str+i));
        i++;
    }

    while(j != i) {
        *(new_str+j) = pop(s);
        j++;
    }

    printf("%s",new_str);

    return 0;
}