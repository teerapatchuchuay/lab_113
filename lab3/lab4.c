
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fibo(int n)
{
    double y;
    if (n == 0){
        y = 0;
    }
    else if (n==1){
        y = 1;
    }
    else{
        y = (pow(1+pow(5,0.5), n)-pow(1 - pow(5,0.5), n))/(pow(2,n)*pow(5,0.5));
    }
    return (int)(y);
}

int main()
{
    char input_n[5];
    fgets(input_n, 5, stdin);
    int n, i;
    n = atoi(input_n);
    for (i = 0 ;i <= n;i++) {
        int total = fibo(i);
        printf("F(%d) = %d\n",i,total);
    }
    return 0;
}