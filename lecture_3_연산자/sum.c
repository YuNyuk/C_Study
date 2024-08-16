#include <stdio.h>

int main() {

    int a = 2 + 3;
    int b = 2 - 1;
    int c = 3;
    int d = 4;

    int f = c + d;

    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    printf("%d\n", d);
    printf("%d\n", f);

    printf("%d\n", 3%1);
    printf("%d\n", 3%2);
    printf("%d\n", 3%3);

    printf("%d\n", 4/3);
    printf("%f\n", (float)4/3);

// 숫자 10의자리, 1의 자리로 나누기
    int kk = 57;
    printf("10 : %d\n", kk / 10);
    printf("1 : %d\n", kk % 10);

// ++, --
    int aa=1;
    printf("%d\n", aa++); // 1에서 1을 더함 . 하지만 다음에 적용= 1
    printf("%d\n", ++aa); // 2가 내려옴. 그리고 바로 1을 더함= 3
    printf("%d\n", aa--); // 3이 내려움. 하지만 다음에 -1을 적용 = 3
    printf("%d\n", --aa); // 2가 내려옴 그리고 바로 1을 뺌 = 1


}
