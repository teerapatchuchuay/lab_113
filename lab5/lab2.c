#include <stdio.h>
#include <stdlib.h>

int main()
{
    char n[100];
    int nn;
    int count = 0;
    fgets(n, 100, stdin);
    nn = atoi(n);

    for (int a = 1; a < nn && !count; a++) {
        for (int b = a + 1; b < nn; b++) {
            int c = nn - a - b;
            if (c <= b)
                continue;
            if (a * a + b * b == c * c) {
                printf("(%d, %d, %d)\n", a, b, c);
                count = 1;
                break;
            }
        }
    }
    if (!count) {
        printf("No triple found.\n");
    }

    return 0;
}
