#include<stdio.h>
int main() {
    int computer_time = 785;
    int day  =  computer_time / 1440;
    int hou  = (computer_time / 60 ) % 24;
    int min = computer_time % 60;
    printf("It is %d days %d hours and %d minutes.",day,hou,min);
}