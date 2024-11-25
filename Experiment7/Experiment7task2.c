#include<stdio.h>
int main()
{
int arrA[50][50],arrB[50][50],arrS[50][50],r,c,n;
  printf("Enter the size of the square matrix:");
  scanf("%d",&n);
  printf("For Array A:\n");
    for(r=0;r<n;r++)
    {
      for(c=0;c<n;c++)
      {
        printf("Element-[%d],[%d]",r,c);
        scanf("%d",&arrA[r][c]);
      }
    }
    printf("\nFor Array B:\n");
    for(r=0;r<n;r++)
    {
      for(c=0;c<n;c++)
      {
        printf("Element-[%d],[%d]",r,c);
        scanf("%d",&arrB[r][c]);
      }
    }
    printf("Matrix A is:\n");
    for(r=0;r<n;r++)
    {
     printf("\n");
      for(c=0;c<n;c++)
      {
        printf("%d\t",arrA[r][c]);

      }
    }
    printf("\nMatrix B is:\n");
    for(r=0;r<n;r++)
    {
     printf("\n");
      for(c=0;c<n;c++)
      {
        printf("%d\t",arrB[r][c]);

      }
    }
    for(r=0;r<n;r++)
    {
      for(c=0;c<n;c++)
      {
        arrS[r][c]=arrA[r][c]+arrB[r][c];

      }
    }
    printf("\nThe Sum Of The Two Matrix is:\n");
    for(r=0;r<n;r++)
    {
     printf("\n");
      for(c=0;c<n;c++)
      {
        printf("%d\t",arrS[r][c]);
      }
    }
}
