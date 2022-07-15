#include <stdio.h>

int max(int x, int y);
int min(int x, int y);

int main() {
    int a,b,c,d;
    int max,min;

    scanf("%i %i",&a,&b);
    scanf("%i %i",&c,&d);

    max = max(b,d);
    min = min(a,c);

    printf("%i", max-min);

    return 0;
}

int max(int x, int y) {
    if (x>y) return x;
    return y;
}

int min(int x, int y) {
    if (x<y) return x;
    return y;
}