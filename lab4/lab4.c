#include <stdio.h>
#include <stdlib.h>
void er(int xx) {
    for (int i = 0; i < xx - 2; i++) {
        printf(" ");
    }
}

void re(int xx) {
    for (int i = 0; i < xx; i++) {
        printf("*");
    }
}

int main() {
    char x[100], y[100];
    int xx, yy;

    fgets(x, 100, stdin);
    fgets(y, 100, stdin);

    xx = atoi(x);
    yy = atoi(y);

    for (int i = 0; i < yy; i++) {
        for (int s = 0; s < i; s++) {
            printf(" ");
        }
        if (i == 0 || i == yy - 1) {
            re(xx);
        } else {
            printf("*");
            er(xx);
            printf("*");
        }
        printf("\n");
    }
}
