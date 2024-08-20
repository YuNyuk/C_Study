#include <stdio.h>

int main(){
    int a;
    int b;
    char c;
    double d;

    printf("%ld\n", sizeof(a)); // 4
    printf("%ld\n", sizeof(b)); // 4
    printf("%ld\n", sizeof(c)); // 1
    printf("%ld\n", sizeof(d)); // 8
}
