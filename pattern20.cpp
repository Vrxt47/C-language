#include<stdio.h>
main()
{
	int s,i,j;

	for(i=1;i<=5;i++)
	{
		for(s=4;s>=i;s--)
		{
			printf(" ");
		}printf("*");
		for(s=1;s<=i;s++)
		{
			printf("  ");
		}
	
		printf("*\n");
	}
	
}
