#include <stdio.h>
int main(){
    int amount = 98;
    int a = 0,b = 0,c = 0,d = 0;
    while (amount > 0){
        if (amount >= 50){
            a += 1;
            amount -= 50;
        }
        else if (amount >= 20){
            b += 1;
            amount -= 20;
        }
        else if (amount >= 5){
            c += 1;
            amount -= 5;
        }
        else if (amount >= 1){
            d += 1;
            amount -=1;
        }
    }
    printf("1: %d\n5: %d\n20: %d\n50: %d",d,c,b,a);
}