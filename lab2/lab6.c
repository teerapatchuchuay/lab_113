#include <stdio.h>
#include <stdlib.h>

int main(){
    char ch;
    int ch_n;

    ch = getchar();
    ch_n = ch;

    if (ch_n >= 48 && ch_n <= 57){
        printf("Output: digit");
    }
    else if (ch_n >= 65 && ch_n <= 90){
        printf("Output: upper case");
    }
    else if (ch_n >= 97 && ch_n <= 122){
        printf("Output: lower case ");
    }
    else{
        printf("Output: others");
    }
}