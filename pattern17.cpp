#include<stdio.h>
main()
{
	int r,c,s;
	for(r=1;r<=5;r++)
	{
		for(s=4;s>=r;s--)
		{
			printf(" ");
		}
		for(c=1;c<=r;c++)
		{
			printf("%d",c);
		}printf("\n");
	}
	int i,j,p;
	for(i=2;i<=5;i++)
	{	
		for(p=1;p<i;p++)
		{
			printf(" ");
		}
		for(j=i;j<=5;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}
