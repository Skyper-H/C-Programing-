#include<stdio.h>
int factorial_iterative(int num){
int prod=1;
for (int i= 1; i <= num;i++)
{
    prod*=i;
}
 return prod;}

 int main(){
     printf("\t\t\t *** Iterative Factorial function *** \n\n");
 int num ;
 printf("Enter Number :");
 scanf("%d",&num);
 printf("The factorial of %d is %d",num,factorial_iterative(num));
return 0;
 }

