#include <stdio.h>
#include <stdlib.h>

int main(){
    char pi[20];
    float pi_d , total , total1 ,total2;

    fgets(pi,20,stdin);
    pi_d = atof(pi);

    if(pi_d <= 300000 && pi_d >= 0){
        total = (0.05 * pi_d);
        printf("%.2f",total);
    }
    else if(pi_d > 300000){
        total1 = 15000;
        pi_d -= 300000;
        total2 = (0.1 * pi_d);
        total = total1 + total2;
        printf("%.2f",total);
    }
    else{
        printf("Error: Salary must be greater or equal to 0");
    }
    
}
