#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
    double pep = 0 ,  che = 0 , mus = 0 ,total , ar , pi = M_PI  , co , cm = 0  ,pr = 0 , pp = 0 , ss = 0 , cc = 0 , mm = 0;
    int  di = 0 ,s = 0 , p = 0 ,  c = 0 ,m = 0;
    char si[10] , pe[10] , ch[10] , mu[10];

    printf("Welcome to My Pizza Shop!!\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Enter pizza size (1=s, 2=m, or 3=l): ");
    fgets(si,10,stdin);
    printf("Extra pepperoni? (1=yes, 0=no): ");
    fgets(pe,10,stdin);
    printf("Extra cheese? (1=yes, 0=no): ");
    fgets(ch,10,stdin);
    printf("Extra mushroom? (1=yes, 0=no): ");
    fgets(mu,10,stdin);
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

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

    if (p == 1){
        pp = 0.5;
    }
    if (c == 1){
        cc = 0.25;
    }
    if (m == 1){
        mm = 0.30;
    }
    cm = pp + cc + mm;

    ar =  pi * (pow(di,2)) / 4;
    co =  5 + (2 * ar) + (cm * ar);

    pr = 1.5 * co;

    printf("Your order costs %.2f baht.\n",pr);
    printf("Thank you.");


}