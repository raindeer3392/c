#include <stdio.h>
#define MONTHS 12 // define : 상수에 대한 정리

int main (void){

    double monthsalary = 1000.5;
    printf("$ %.2f", monthsalary * MONTHS);
    return 0;

}