#include<stdio.h>
main()
{
	int i,j,r,c,l;
	int a[100][100];
	
	printf("Enter number of rows :");
	scanf("%d",&r);
	printf("Enter number of columns :");
	scanf("%d",&c);
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]);
		}printf("\n");
	}
	l=r*c;
	printf("\n----------------------------------\n");
	printf("Length of array is %d ",l);
}
