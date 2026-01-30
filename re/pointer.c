#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void st(int *a){
    *a += 1;
}

int main(){
   int *pt;
   int num = 10 , p;
   st(&num);
   printf("%d",num);
}