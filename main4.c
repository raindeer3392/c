#include <stdio.h>
#include <limits.h>
// <limits.h> 는 한계값을 뚫은 라이브러리

int main(void)
{

    int x = INT_MAX;
    printf("%d. \n", x);
    printf("%d. \n", x+1);
    // 최댓값 + 1을 해버려서 오히려 최솟값으로 지정되어어버림
    return 0;

}
