#include <stdio.h>
#include <stdlib.h>

int main() {
    // array declaration and initialization
    int numbers[5] = {2, 3, 5, 7, 11};
    int total = 0;
    
    for (size_t i = 0; i < 5; ++i) {
        printf("numbers[%lu]: %d\n", i, numbers[i]);
        total += numbers[i];
    }
    printf("Summation of elements in numbers is %d\n", total);
    
    return 0;
}