#include <stdio.h>
#include <stdlib.h>

int uu(int x){
    if (x == 0){
        return 0;
    }
    else
    {
        uu(x/2);
        printf("%d",x%2);
    }
}
int main(){
    char  ch[100];
    int n;

    fgets(ch,100,stdin);
    n = atoi(ch);

    if (n == 0){
        printf("0");
    }
    else{
        uu(n);
    }

}