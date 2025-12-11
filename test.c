#include <stdio.h>

int main(){
    int ch = 2;
    switch (ch) {
        case 1 : printf("o");
                 break;
        case 2 : printf("t");
        case 3 : printf("w");
        default : printf("f");
    }
}