#include<stdio.h>
int factorial(int i);

main()
{
	int i;
	printf("Enter Number\n");
	scanf("%d",&i);
	printf("%d\n%d",i,factorial(i));
	return 0;
}
int factorial(int i)
{
	if(i<=1)
	{
		return 1;
	}
	return i*factorial(i-1);
}
