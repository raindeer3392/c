#include <stdio.h>

int main(void)
{

    int x = 50;
    float y = 123456789.123456789;
    // 플롯으론 너무 많은 데이터 이므로 반올림되어 123456792.00이 됨
    double z = 123456789.123456789;
    printf("x = %d\n",x);
    // \(역슬레시) 는 엔터 위에 있음! 혹은 벡스페이스 아래
    printf("y = %.2f\n",y);
    printf("z = %.2f\n",z);
    return 0;

}