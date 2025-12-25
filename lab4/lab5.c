#include <stdio.h>
#include <stdlib.h>

void re(int y){
    for (int i = 0; i < y; i++){
        printf("-");
    }
}

void er(int y){
    char x[] = {'a','b','c','d','e','f','g','h','i','j'};
    for (int i = y; i > 0; i--){
        printf("%c-",x[i]);
    }
    printf("a");
    for (int i = 1; i <= y; i++){
        printf("-%c",x[i]);
    }
}

int main(){
    char n[10];
    fgets(n,10,stdin);
    int nn = atoi(n);

    for (int i = nn - 1; i >= 0; i--) {
        re(i);
        // er(i);
        re(i);
        printf("\n");
    }
    for (int i = 1; i < nn; i++) {
        re(i);
        // er(i);
        re(i);
        printf("\n");
    }
}
