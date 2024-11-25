#include <stdio.h>
int main() 
{
  double P,C,M,PCM;
  printf("Please enter HSC marks\n");
  printf("Enter Physics marks\t   :");
  scanf("%lf", &P);
  printf("Enter Chemistry marks\t :");
  scanf("%lf", &C);
  printf("Enter Maths marks\t   :");
  scanf("%lf", &M);
  PCM=(P+C+M)/3;
  printf("The Avg of your PCM Marks:%f",PCM);
  (PCM>=50.0)?printf("You are Eligible for college admission\n"):
  printf("you are not eligible for college admission");
    return 0;
}
