#include <stdio.h>

int main(){
    
    int a = 3;
    int b = 7;
    int c = 6;
    int d = 0;
    int f;
    
    f = a || b; // -> f = 1
    printf("a || b = %d\n", f); // 1
    
    f = c || d; // -> f = 1
    printf("c || d = %d\n", f); // 1
    
    f = c && d; // -> f = 0
    printf("c && d = %d\n", f); // 0

    // 비트 연산자

    char g = 8;
    char h = 4;
    char i = 0;

    i = g | h;
    printf("g | h = %d\n", i); // 12
    
    i = g & h;
    printf("g & h = %d\n", i); // 0
    
    i = g << 1;
    printf("g << 1 = %d\n", i); // 16 (*2)랑 같음
    
    i = g >> 1;
    printf("g >> 1 = %d\n", i); // 4 (/2)랑 같음
}
    

