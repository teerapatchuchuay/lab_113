#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    char n[20];
    int nn;
    double pi = 0.0;
    
    printf("Enter n: ");
    fgets(n, 20, stdin);
    nn = atoi(n);
    for (int i = 0; i < nn; i++) {
        double pit = 4.0 / (2 * i + 1);
        if (i % 2 == 0)
            pi += pit;
        else
            pi -= pit;
    }
    printf("%.10f\n", pi);
}