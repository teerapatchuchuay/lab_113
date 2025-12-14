#include <stdio.h>
#include <stdlib.h>

int main(){
    char p[10000] , q[10000];
    int pi , qi , i , gc= 1,x,y;

    fgets(p,10000,stdin);
    fgets(q,10000,stdin);

    pi = atoi(p);
    qi = atoi(q);

    
    for(i = 1; i <= pi && i <= qi;i++){
        if(pi % i == 0 && qi % i == 0){
            gc = i;
        }
    }

    x = pi / gc;
    y = qi / gc;

    if (y == 1){
        printf("= %d",x);
    }
    else{
        printf("= %d/%d",x,y);
    }
}