#include <stdio.h>
#include <stdlib.h>

// int main(){
//     char c, *cp;
//     float f , *fp;
//     printf("%d %d %d %d",sizeof(c),sizeof(cp),sizeof(f),sizeof(fp));
// }

// void h(char a[]){
//     while (*a != '\0'){
//         printf("%c",*a-1);
//         a++;
//     }
    
// }
// int main(){
//     h("hello");
// }

// int main(){
//     char x[] = {2,8,10,9,5,7,-1,6,3,4,1};
//     char *p;
//     for (p=x; *p != -1 ; p = x + *p){
//         printf("%d ",*p);
//     }
// }

int main(){
    int d[] = {1,2,3,4};
    int *p;
    for(p=d;*p != 6; p = d+ (++p -d) %4){
        *p = *p * 2;
    }
    printf("%d %d %d %d",d[0],d[1],d[2],d[3]);
}