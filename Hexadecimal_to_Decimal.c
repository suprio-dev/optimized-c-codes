#include<stdio.h>
void main(){
    int num;
    printf("Enter a hexadecimal number:");
    scanf("%x", &num);
    printf("The hexadeciaml to decimal conversion of %x is %d", num,num);
}