#include <stdio.h>

int main(){
    // 참은 0이 아니면 참이다
    // 거짓은 0이다.
    int a = 3;
    int b = 2;
    int c = a > b;
    (c) ? printf("True\n") : printf("False\n"); // True 출력됨.

    printf("a > b 결과 : %d\n", c);		// 1 출력됨.

    c = a < b;
    (c) ? printf("True\n") : printf("False\n"); // False 출력됨.

    printf("a < b 결과 : %d\n", c);	        // 0 출력됨.
    return 1;
}
