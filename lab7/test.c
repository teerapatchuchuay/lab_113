#include <stdio.h>
#include <stdlib.h>

int pt(char p[]){
    int i = 0;
    while(p[i] != '\0'){
        if (p[i] == 'p'){
            p[i] = 'e';
            return 0;
        }
        i++;
    }
    return 1;
}

int main(){
    char p[100];
    printf("Enter a");
    scanf("%s",p);
    pt(p);
    if (p == 0){
        printf("%s",p);
    }else{
        printf("======%s",p);
    }
}