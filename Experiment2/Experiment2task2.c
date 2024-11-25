/*WAP to find the sum of all the odd
numbers between numbers entered by the
User.*/
#include<stdio.h>
int main(){
printf("\t\t\t ***Sum of odd numbers*** \n\n\n");
 // initialization of all the variables
int low_range,high_range,remainder,sum=0,odd_num;
 // reading all  the inputs
printf("Enter the low end of the range\t:");
 scanf("%d",&low_range);
printf("Enter the high end of the range\t:");
 scanf("%d",&high_range);
 // main logic
if (low_range<high_range)
{
 for ( odd_num=low_range ;odd_num <= high_range; odd_num++)
     {
         remainder = odd_num%2;

         if(remainder != 0)
          {
           sum =odd_num+sum ;
          }
      }
      //result
     printf("The sum of all odd numbers in the given range of %d to %d is equal to: %d\n",low_range,high_range, sum );
}
else
{
 printf("invalid range the low range must be greater the high range");
}
  return 0;
  }

