#include <stdio.h>
#include <stdlib.h>

int main(){
    char ch[100];
    int n ;
    fgets(ch,100,stdin);
    n = atoi(ch);

    for (int i = 1 ; i <= n; i++){
        for(int j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
    for (int i = n-1 ; i >= 1; i--){
        for(int j = 1; j<= i; j++){
            printf("*");
        }
        printf("\n");
    }
    
}