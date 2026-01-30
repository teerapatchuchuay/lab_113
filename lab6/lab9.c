[hide line #]
#include <stdio.h>
#include <stdlib.h>

void str_extract(char** source, char** vowel){
    
}

int main() {
    char* str = malloc(201);
    scanf("%[^\n]s", str);
    char* vowel = NULL;

    str_extract(&str, &vowel);

    printf("Consonants: \"%s\"\n", str);
    printf("    Vowels: \"%s\"\n", vowel);

    free(str);
    free(vowel);
    return 0;
}