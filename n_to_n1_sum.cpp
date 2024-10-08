#include<stdio.h>
int main()
{
int s,e,sum;
printf("Enter starting and ending values of the range :");
scanf("%d%d",&s,&e);
while(s<=e)
{
	if(s%2==0)
sum=sum+s;
	s++;
	
}
printf("\n The sum of numbers = %d",sum);
return 0;
}
