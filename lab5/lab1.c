#include <stdio.h>
#include <math.h>
#include <stdlib.h>

long long re(){
    char n[100] ;
    printf("Input n = ");
    fgets(n,100,stdin);
    long long t = atoll(n);
    return t;
}
long long er(long long x){
    return x * x;
}
long long ree(long long y,long long n){
    long long pp = n;
    long long p = 1;

    while(n > 0){
        if (n % 10 != y % 10){
            p = 0;
            break;
        }
        n = n /= 10;
        y = y /= 10;
    }
    if (p){
        printf("Yes. %d is automorphic number.",pp);
    }else{
        printf("No. %d is not automorphic number.",pp);
    }
    
}

int main(){
    long long n,y,ty;
    char x[100];
    n = re();
    y = er(n);
    printf("n^2 = %lld\n",y);
    ty = ree(y,n);
}