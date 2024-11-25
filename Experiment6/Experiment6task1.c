#include<stdio.h>
void counter()
{
static int count =0;
count++;
printf("Counter function is called:%d\n",count);
}

int main()
{
int n,i=1;
printf("\t\t\t***Storage Counter***\n\n");
printf("Enter The Number Of Calls:");
scanf("%d",&n);
while (i<=n)
{
    counter();
    i++;
}
return 0;
}

