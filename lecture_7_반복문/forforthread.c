#include <stdio.h>

int main(){

    int isRunning = 1;

    while(1){
	if(isRunning == 0){
	    printf("사용자가 시스템을 종료했습니다.\n");
	    break;
	}
	printf("종료를 원하시면 0 : __\b\b");
	scanf("%d", &isRunning);
	getchar();
	printf("너가 입력한 값 %d\n", isRunning);
    }
}
