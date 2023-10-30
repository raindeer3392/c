#include <stdio.h>
#define second_per_minute 60

int main(void) {

    int input = 1000;
    int minute = input / second_per_minute;
    int second = input % second_per_minute;
    printf("%d sec, %d min, %dsec. \n", input, minute, second);
    return 0;

}