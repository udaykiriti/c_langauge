#include<stdio.h>
int main()
{
int s,e;
printf("Enter starting and ending values of the range :");
scanf("%d%d",&s,&e)	;
while(s<=e)
{
	printf("%d \t",s);
	s++;
}
return 0;
}
