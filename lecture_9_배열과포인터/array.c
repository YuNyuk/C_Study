#include <stdio.h>

#define MAX 100

int main(){
    
    int arrayA[MAX];
    
    for(int i=0; i<MAX; i++) {
	arrayA[i] = i*2;
	printf("arrayA[%d] = %d\n", i, arrayA[i]);
    }
    
    int a = arrayA;
    printf("a = %d\n", a); // a = array의 시작번지
    return 1;
}
