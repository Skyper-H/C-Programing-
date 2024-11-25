#include<stdio.h>
void is_prime(int num);
int main (){
    printf("\t\t\t *** Prime Number Finder *** \n\n");1
int s_n,e_n,i,c=0;
i= s_n<=1?2:s_n;
printf("enter Starting number:");
scanf("%d",&s_n);
printf("enter Ending number:");
scanf("%d",&e_n);
printf("The Prime number Between %d and %d is :",s_n,e_n);
i= s_n<=1?2:s_n;
while (i <=e_n){
if(is_prime_number(i)){
    printf("%d,",i);
    c++;
}
 i++;
}
printf("   \n%d",c);
return 0;}
int is_prime_number(int num){
    for (int i=2; i<num; i++) {
      if (num % i== 0){
        return 0;}}
     return 1;}
