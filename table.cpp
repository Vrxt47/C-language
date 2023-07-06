#include<stdio.h>
main()
{
	int no;
	printf("Enter the number of table");
	scanf("%d",&no);
	
	int i,a;
	for(i=1;i<=10;i++)
	{
		a=no*i;
		printf("%d*%d=%d\n",no,i,a);
		
	}
}
