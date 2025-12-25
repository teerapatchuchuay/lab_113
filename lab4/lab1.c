#include <stdio.h>
#include <stdlib.h>

int main() {
    char x[10];
    int n;
    fgets(x, 10, stdin);
    n = atoi(x);
    printf("Binary number of %d is ", n);
    printf("%d", (n >> 3) & 1);
    printf("%d", (n >> 2) & 1);
    printf("%d", (n >> 1) & 1);
    printf("%d.\n", n & 1);
}
