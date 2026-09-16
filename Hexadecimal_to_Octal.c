#include<stdio.h>
void main(){
    int num;
    printf("Enter a hexadecimal number:");
    scanf("%x", &num);
    printf("The hexadeciaml to octal conversion of %x is %o", num,num);
}