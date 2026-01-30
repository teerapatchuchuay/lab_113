#include <stdio.h>
#include <stdlib.h>

void shift_left(char str[], int n);

int main()
{
   char str[100], *c;
   char input[20];
   int n;

   printf("String: ");
   fgets(str, 100, stdin);
   for (c=str; *c && *c != '\n'; c++)
       ;
   *c = 0;
   printf("     n: ");
   fgets(input, 20, stdin);
   n = atoi(input);
   shift_left(str, n);
   printf("Output: >>%s<<\n",str);
   return 0;
}


void shift_left(char str[], int n)
{
    int l = 0;
    while (str[l] != '\0')
        l++;
    if (l == 0 || n == 0)
        return;
    n = n % l;
    for (int k = 0; k < n; k++) {
        char fi = str[0];
        for (int i = 0; i < l - 1; i++) {
            str[i] = str[i + 1];
        }
        str[l - 1] = fi;
    }
}