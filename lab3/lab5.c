#include <stdio.h>
#include <stdlib.h>

int main(){
    char ch = 'a',n[100],st[100];
    int ni,chi,sti,stp;

    fgets(n,100,stdin);
    ni = atoi(n);
    if (ni <= 0 || ni > 26){
        printf("-");
        return 0;
    }
    chi = (int)ch;
    sti = (chi + ni) - 1;
    
    for(char i = sti;i >= 'a'; i--){
        printf("%c",i);
        if (i != 'a'){
            printf("-");
        }
    }

    stp = chi + 1;
    for(char i = stp; i <= sti; i++){
        printf("-");
        printf("%c",i);
    }

}