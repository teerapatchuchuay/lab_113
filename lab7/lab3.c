#include <stdio.h>
#include <stdlib.h>


void stringcat(char src[], char dest[])
{
    int i = 0,j=0 ,p = 0;
    while (src[p] != '\0'){
        if(src[p] == '\n'){
            src[p] = '\0';
            break;
        }
        p++;
    } 
    while (dest[i] != '\0'){
        if (dest[i] == '\n'){
            dest[i] = '\0';
            break;
        }
        i++;
    }
    while (src[j] != '\0'){
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
}


int main(){
  char in1[100],in2[100];
  printf("Input 1: ");
  scanf("%s",in1);
  printf("Input 2: ");
  scanf("%s",in2);
  stringcat(in1,in2);
  printf(" Output: ");
  printf("%s\n",in2);
  return 0;
}