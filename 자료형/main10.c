#include <stdio.h>

int main(void) {

    int x = 50, y = 30;
    printf("x가 y보다 크고 y는 40미만입니까? %d\n", (x > y) && (y < 40));
    // AND 문
    printf("x가 y보다 작거나 혹은 y가 30입니까? %d\n", (x < y) || (y == 30));
    // OR 문
    printf("x가 50이 아닙니까? %d\n", x != 50 );
    // NOT 문
    return 0;

}