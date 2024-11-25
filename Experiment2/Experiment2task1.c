#include<stdio.h>
int main()
{
printf("\t\t\t ***Even odd Finder*** \n\n\n");

int number,remaider;
printf("Enter the desired number: ");
scanf("%d",&number);
remaider = number%2;
if(remaider == 0)
{
    printf("The entered number %d is even",number);
}
else
{
    printf("The entered number %d is odd",number);
}
return 0;
}
