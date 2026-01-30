#include <stdio.h>
#include <stdlib.h>

int main() {
    char ch[100];
    int n;
    printf("Enter n: ");
    fgets(ch, 100, stdin);
    n = atoi(ch);
    for (int i = 1; i <= 2 * n - 1; i++) {
        int len;
        if (i <= n)
            len = i;
        else
            len = 2 * n - i;
        for (int j = 1; j <= len; j++) {
            if (j % 2 == 1)
                printf("-");
            else
                printf("x");
        }
        printf("\n");
    }
}
