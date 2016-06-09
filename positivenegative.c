#include<stdio.h>
int main()
{
int inum  ;
printf("Enter the number")  ;
scanf("%d",&inum);
	if(inum==0)
	
		printf("The enterd number is zero %d",inum);
	
	else
	{
		if(inum>0)
		
			printf("The entered numberis positive %d",inum);
		
		else
		
			printf("The entered number is negative %d",inum);
		
	}
return 0;
}
