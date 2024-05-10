#include<stdio.h>

void max(int a)
{
	if(a%3==0 && a%5==0)
	{
		printf("The given number is divisible by both 3 & 5",a);
	}
	else
	{
		printf("The given number is not divisible by both 3 & 5",a);
	}
	
}


main()
{
	int a;
	printf("Enter value : ");
	scanf("%d",&a);
	max(a);
}