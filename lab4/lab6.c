#include <stdio.h>
#include <stdlib.h>

float re(float x, float y){
    return y - x;
}

float er(float x, float s){
    return s + x;
}

float uu(){
    char chto[1000];
    printf("Enter your goal amount: ");
    fgets(chto, 1000, stdin);
    return atof(chto);
}
float rd(){
    char chn1[1000];
    printf("Enter money collected today: ");
    fgets(chn1, 1000, stdin);
    return atof(chn1);
}
int main(){
    float total, n1, summ = 0;
    int count = 0;
    total = uu();
    while (total > 0){
        n1 = rd();
        count++;
        total = re(n1, total);
        summ = er(n1, summ);
        if (total > 0){
            printf("Total money collected up to day %d is %.2f. You need %.2f more.\n",count, summ, total);
        }
    }
    printf("Congratulations! You take %d days to reach your goal.", count);
    return 0;
}
