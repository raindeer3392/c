#include <stdio.h>

int main(void) {

    int x = 100;
    printf("현재 x의 값은 %d 입니다. \n", x);
    x += 50; // x= x + 50 ;
    printf("현재 x의 값은 %d 입니다. \n", x);
    x -= 50; // x = x - 50 ;
    //이걸로 /=(나누기) , *=(곱하기) 등등... 할수 있음
    printf("현재 x의 값은 %d 입니다. \n", x);

    // %= 도 있는데 이것은 n으로 나누고 그의 나머지값
    x %= 6;
    printf("현재 x의 값은 %d 입니다. \n", x);
    return 0;

}