#include <stdio.h>
int main() {
    char *p ;
    int i, count = 0;
    printf("String (without a space): ");
    scanf("%s", p);
    while(*p){
        if (*p == 'A' || *p == 'a' || *p == 'E' || *p == 'e' || *p == 'I' || *p == 'i'|| *p == 'O' || *p == 'o'){
            printf("%c",*p);
            count++;
        }
        p++;
    }
    if (count >= 2){
        printf("\nThis string contains %d vowels.\n", count);
    }else{
        printf("\nThis string contains %d vowel.\n", count);
    }
}