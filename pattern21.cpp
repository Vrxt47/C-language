#include<stdio.h>
main()
{
	int i=1;
	int r,c;
	for(r=1;r<=5;r++)
	{
		for(c=1;c<=r;c++)
		{
			printf("%d",i++);
		}printf("\n");
	}
	
}
