#include <stdio.h>
#include <stdlib.h>

int main(){
    char am_t[20] , pi_c[20];
    int total_am,di;
    float summ,total_pi ;
    
    fgets(am_t,20,stdin);
    fgets(pi_c,20,stdin);

    total_am = atoi(am_t);
    total_pi = atof(pi_c);

    // printf("%d %d",total_am,total_pi);

    if (total_am >= 9){
        di = 40;
        summ = total_pi - (0.40 * total_pi);
        total_am -= 9;
    }
    else if (total_am >= 6){
        di = 30;
        summ = total_pi - (0.30 * total_pi);
        total_am -= 6;
    }
    else if (total_am >= 3){
        di = 20;
        summ = total_pi - (0.20 * total_pi);
        total_am -= 3;
    }
    else if (total_am >= 2){
        di = 15;
        summ = total_pi - (0.15 * total_pi);
        total_am -= 2;
    }
    else if (total_am == 1){
        di = 10;
        summ = total_pi - (0.1 * total_pi);
        total_am -= 1;
    }
    else{
        di = 0 ;
        summ = total_pi;
    }
    printf("You get %d percents discount.\n",di);
    printf("Total amount due is %.2f Baht.\n",summ);
    printf("And you have %d stickers left.",total_am);

}