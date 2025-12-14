#include <stdio.h>
#include <stdlib.h>

int main(){
    char n[20],m[20];
    long long ni = 0 , mi = 0 ,p,xx,yy;
    fgets(n,20,stdin);
    fgets(m,20,stdin);

    ni = atoll(n);
    mi = atoll(m);
    xx = ni;
    yy = mi;
    while(mi != 0){
        p = mi;
        mi = ni % mi;
        ni = p;
    }
    printf("GCD: %lld\n",ni);
    printf("LCM: %lld",(xx / ni) * yy);
}