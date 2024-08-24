#include <stdio.h>

int main(){

    for (int i = 1; i <= 9; i++) {
	printf("[%d단]\n", i);

	for(int j = 1; j <= 20; j++){
	    if(j > 5) {
		break;
	    }
	    printf("%d * %d = %d\n", i, j, i*j);
	}
	printf("\n");
    }
}
