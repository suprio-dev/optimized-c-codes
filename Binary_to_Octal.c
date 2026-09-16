#include<stdio.h>
#include<math.h>
void main(){
    int bin, count=0,s=0,i=0;
    printf("Enter a binary number to get its octal equivalent::");
    scanf("%d", &bin);
   while(bin>0){
         if((bin%10)==1)
       s+= pow(2, i);
       bin/=10; 
       i++;
    }
    printf("%o",s);
}