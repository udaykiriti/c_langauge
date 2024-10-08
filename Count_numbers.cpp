#include<stdio.h>
int main()

{
	int n,d=0;
	printf("Enter any number:");
	scanf("%d",&n);
	while(n)
	{
		d++;
		n=n/10;
		
	}
	printf("Number of digits = %d",d);
}
