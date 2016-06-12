#include<stdio.h>
int main()
{
int i,num,a[20],sum=0;
printf("\nenter the number");
scanf("%d",&num);

for(i=0;i<=num;i++)
{
        sum+=i;
}
printf("\n%d ",sum);
return 0;
}
