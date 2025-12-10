#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
    float pep = 0 ,  che = 0 , mus = 0 ,total , ar , pi = M_PI ;
    int s = 0 , p = 0 ,  c = 0 ,m = 0 , di = 0;
    char si[10] , pe[10] , ch[10] , mu[10];

    printf("Welcome to My Pizza Shop!!");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("Enter pizza size (1=s, 2=m, or 3=l): ");
    fgets(si,10,stdin);
    printf("Extra pepperoni? (1=yes, 0=no): ");
    fgets(pe,10,stdin);
    printf("Extra cheese? (1=yes, 0=no): ");
    fgets(ch,10,stdin);
    printf("Extra mushroom? (1=yes, 0=no): ");
    fgets(mu,10,stdin);
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~");

    s = atoi(si);
    p = atoi(pe);
    c = atoi(ch);
    m = atoi(mu);

    if (s == 1 ){
        di = 10;
    }
    else if (s == 2){
        di = 16;
    }
    else if (s == 3){
        di = 20;
    }

    ar =  pi * (pow(di,2)) / 4;


}