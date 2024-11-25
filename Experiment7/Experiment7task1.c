#include<stdio.h>
int main(){
int n,i,a[100],large;
  printf("Enter the lenght:");
    scanf("%d",&n);
for(i=0;i<=n-1;i++){
    printf("Enter the value:");
    scanf("%d",&a[i]);
}
large=a[0];
for(i=0;i<=n-1;i++){
 if(a[i]>large){
    large=a[i];
 }
}
printf("the largest value is %d",large);
return 0;
}
