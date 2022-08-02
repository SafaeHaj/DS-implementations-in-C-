#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stacks.h"

int main() {
    char str[20], new_str[20];
    int i = 0, j = 0;
    stack ss; ss.top = -1; stack *s = &ss;

    printf("This program reverses strings using stacks.\n");
    printf("Enter string input\n");
    gets(str);

    printf("\nEntered string:\n");
    puts(str);

    while(*(str+i) != '\0') {
        push(s,*(str+i));
        i++;
    }

    while(j != i) {
        *(new_str+j) = pop(s);
        j++;
    }

    printf("\nReversed String:\n");
    puts(new_str);

    return 0;
}