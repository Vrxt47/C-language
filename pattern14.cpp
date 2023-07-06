#include<stdio.h>
main()
{
	int no,r,c,s;
	printf("Enter Your Number");
	scanf("%d",&no);
	
	for(r=no;r>=1;r--)
	{
		for(s=1;s<=r;s++)
		{
			printf(" ");
		}
		for(c=r;c<=no;c++)
		{
			printf("%d",c);
		}printf("\n");
	}
}
