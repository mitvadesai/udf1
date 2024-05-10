#include<stdio.h>

int cube(int a)
{
    int ans;
    ans = a * a * a;
    return ans;
}

main()
{
	int a;
	printf("Enter value a : ");
	scanf("%d",&a);
	
	printf("cube is : %d ",cube(a));
}