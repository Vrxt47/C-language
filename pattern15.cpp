#include<stdio.h>
main()
{
	int no,r,c,s;
	printf("Enter Your Number");
	scanf("%d",&no);
	
	for(r=1;r<=no;r++)
	{
		for(s=5;s>=r;s--)
		{
			printf(" ");
		}
		for(c=r;c>=1;c--)
		{
			printf("%d",c);
		}printf("\n");
	}
}
