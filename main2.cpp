#include <stdio.h>

int main(void)

{

    int x;
    x = 5;
    // "%d"에 변수가 들어감, 변수값은 뒤에 , 찍고 필요한 변수내용을 넣음
    printf("what's a %d?", sizeof(x));
    //한글로 하면 버그가 있는데 출력할때 %d를 같이 쓰면 그 값이 출력됨
    //sizeof = 변수값의 메모리 크기
    return 0;

}