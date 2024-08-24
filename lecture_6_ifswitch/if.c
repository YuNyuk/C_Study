#include <stdio.h>

int main(){
    
/*    int a = 0;
    int b = 2;

    if(a > b) {
	a = 1;
    }
    else {
	a = 3;
    } */

    int op = 0;
    int a =0;
    scanf("%d", &op);
    
    switch(op) {

	case 1:
	case 2:
	case 3:
	case 4:
	    a=200;
	    break;
	case 5:
	    a=5;
	    break;
	default :
	    a=99;
	    break;
    }

    printf("결과: %d\n", a); 

}
