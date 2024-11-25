#include<stdio.h>
int factorial_recursive(int num){
 if (num<=1){
    return 1;
 }
 return num*factorial_recursive(num-1);
 }
int main(){
     printf("\t\t\t *** Recursive Factorial function *** \n\n");
 int num ;
 printf("Enter Number :");
 scanf("%d",&num);
 printf("The factorial of %d is %d",num,factorial_recursive(num));
return 0;
 }
