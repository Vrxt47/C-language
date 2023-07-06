#include<stdio.h>
int func(int num);
main()
{
	int num,temp=0;
	printf("Enter Value");
	scanf("%d",&num);
	temp=func(num);
	printf("%d",temp);
}
int func(int n)
{
	int vrut=0;
		
	while(n!=0)
	{
		n=n/10;
		vrut++;
	}
	return vrut;
}
