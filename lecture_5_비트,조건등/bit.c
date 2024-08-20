#include <stdio.h>

int main(){
    
    int a = 0;
//  char Val = 0;
    int printVal = 0;
    
    printf("insert : ");
    scanf("%d", &a);

//  for 문을 모른다는 전제 하에!
    printVal = a & (1<<7);
    printVal = printVal >> 7;
    printf("%d ", printVal);

    printVal = a & (1<<6);
    printVal = printVal >> 6;
    printf("%d ", printVal);
    
    printVal = a & (1<<5);
    printVal = printVal >> 5;
    printf("%d ", printVal);
    
    printVal = a & (1<<4);
    printVal = printVal >> 4;
    printf("%d ", printVal);
    
    printVal = a & (1<<3);
    printVal = printVal >> 3;
    printf("%d ", printVal);
    
    printVal = a & (1<<2);
    printVal = printVal >> 2;
    printf("%d ", printVal);
    
    printVal = a & (1<<1);
    printVal = printVal >> 1;
    printf("%d ", printVal);
    
    printVal = a & (1<<0);
    printVal = printVal >> 0;
    printf("%d ", printVal);

    printf("\n");

}
