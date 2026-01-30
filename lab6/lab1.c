#include <stdio.h>

int main() {
    int ho, min;
    char p[3];
    printf("Enter a 12-hour time [eg. 12:34 am]: ");
    scanf("%d:%d %2s", &ho, &min, p);
    if (p[0] == 'a' || p[0] == 'A') {
        if (ho == 12)
            ho = 0;
    } 
    else if (p[0] == 'p' || p[0] == 'P') {
        if (ho != 12)
            ho += 12;
    }
    printf("Equivalent 24-hour time: %02d:%02d\n", ho, min);
}
