#include <stdio.h>
#include <stdlib.h>

int main(){
    char ch[10];
    int chi = 0;

    fgets(ch,10,stdin);

    chi = atoi(ch);

    while(chi >= 0){
        printf("%d\n",chi);
        --chi;
    }


}