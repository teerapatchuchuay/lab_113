#include <stdio.h>
#include <stdlib.h>

int u(int n,int i,int p){
    printf("---- round %d ----\n",i);
    for(int i = n; i > 0; i--){
        if(i == p + 1){
            printf("|-^-|\n");
        }else if(i == p + 2){
            printf("|-O-|\n");
        }else{
            printf("|---|\n");
        }
    }
    // printf("\n");
}

int yu(){
    char ch[100];
    printf("Input step command: ");
    fgets(ch,100,stdin);
    int n = atoi(ch);
    return n;
}

int er(){
    char ch[100];
    int n , p = 0 , i = 1;
    printf("Input number of stairs: ");
    fgets(ch,100,stdin);
    n = atoi(ch);
    while(1){
        u(n,i,p);
        int y = yu();
        if (y == 0){
            break;
        }else{
            p += y;
            if (p+1 >= n){
                p = n - 2;
            }else if(p < 0){
                p = 0;
            }
        }
        i += 1;
    }
}


int main(){
    int r = er();
}