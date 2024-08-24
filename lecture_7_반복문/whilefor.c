#include <stdio.h>

int zero(){
    printf("call zero\n");
    return 0;
}

int main(){
    
/*    int a = 10;
    int b = 3;
    while (a>b){
	a--;
	printf("a : %d\n", a);
    }*/

    int a = 0;

    do{ 
	zero();
    }while(0);

    
/*    int a;
    for (a = 0 ; a<10 ; a++) {
    
	printf("나는 C언어 마스터다.%d\n", a);
    
    }*/

    return 1;
}

