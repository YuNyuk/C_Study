#include <stdio.h>

int main(){

    int a;
    int *pa;
    int ** ppa;

    a=3;
    printf("a = %d\n", a); // 변수 a의 값
    printf("&a = %p\n", &a); // 변수 a의 주소값    
    printf("\n");

    pa = &a; // pa = 변수 a의 주소값
    printf("pa = %p\n", pa); // pa = &a = 변수 a의 주소 값
    *pa = 5; // *(pa) = *(&a) -> *pa = a
    printf("*pa = %d\n", *pa); // *pa = a = 5
    printf("a = %d\n", a);
    printf("&pa = %p\n", &pa); // &(pa) -> 변수 pa의 주소 값
    printf("\n");

    ppa = &pa; // ppa = 변수 pa의 주소 값
    printf("ppa = %p\n", ppa); // &pa
    printf("*ppa = %p\n", *ppa); // *ppa = *(&pa) = pa의 값 = a의 주소 = &a
    printf("**ppa = %d\n", **ppa); // *(*ppa) = *(*(&pa)) = *pa = *(&a) = a = 5
    printf("&ppa = %p\n", &ppa); // ppa의 주소 값
    return 1;
}
