#include <stdio.h>
int main()
{
 float num1,num2,result;
 int mod_result;
 char op;
  printf("\t\t\t***Calculator***\n\n");
  printf(" Operations:\n\t + : Addition\n\t - : Subtraction\n\t * : Multiplication\n\t / : Division\n\t %% : Modulus\n");
 repeat:
  printf("Enter first operand :");
   scanf("%f",&num1);
  printf("Enter second operand :");
   scanf("%f",&num2);
  printf("Enter operator :");
   scanf(" %c",&op);

  switch (op) 
  {
  case '+':
    result = num1 + num2;
    printf("%.1f + %.1f = %.1f",num1,num2,result);
    break;
  case '-':
    result = num1 - num2;
    printf("%.1f - %.1f = %.1f",num1,num2,result);
    break;
   case '*':
    result = num1 * num2;
    printf("%.1f * %.1f = %.1f",num1,num2,result);
    break;
    case '/':
      {
    if(num2 != 0)
     {
    result = num1 / num2;
    printf("%.1f / %.1f = %.1f",num1,num2,result);
     }
    else
    {
      printf("INFINITY");
    }
    break;
      }
    case '%':
    mod_result = (int)num1%(int)num2;
    printf("%.0f %% %.0f = %d",num1,num2,mod_result);
    break;
  default:
    printf("Invalid opration");
}
printf("\nContinue? (Y/N)");
 scanf(" %c",&op);
 if (op == 'y'|| op == 'Y')
 {
    goto repeat;
 }
  else 
 {
   printf("\nthank you for using my clac");
 }


return 0;
}
