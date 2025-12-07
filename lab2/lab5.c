#include <stdio.h>
#include <stdlib.h>

int main(){
    char ch1[10], ch2[10],ch3[10];
    int ch1_d , ch2_d , ch3_d; 
    
    printf("Enter length of side A: ");
    fgets(ch1,10,stdin);
    printf("Enter length of side B: ");
    fgets(ch2,10,stdin);
    printf("Enter length of side C: ");
    fgets(ch3,10,stdin);

    ch1_d = atoi(ch1);
    ch2_d = atoi(ch2);
    ch3_d = atoi(ch3);

    

}