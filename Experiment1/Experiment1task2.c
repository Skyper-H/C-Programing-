#include <stdio.h>

/*Aim: Write a program to get students PCM marks from the user and find the average. Use conditional
operator to print if the student is eligible for admission. Eligibility criteria is 50% in
PCM.*/

int main() {
  double P,C,M,PCM;
  printf("Please enter HSC marks\n");
  printf("Enter Physics marks\t   :");
  scanf("%lf", &P);
  printf("Enter Chemistry marks      :");
  scanf("%lf", &C);
  printf("Enter Maths marks\t   :");
  scanf("%lf", &M);
  PCM=(P+C+M)/3;
  printf("The Avg of your PCM Marks:%f",PCM);
  (PCM>=50.0)?printf("You are Eligible for college admission\n"):
  printf("you are not eligible for college admission");
    return 0;
}