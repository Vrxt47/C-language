#include<stdio.h>
main()
{
	int no,a[no],i;
	printf("Enter number of elements");
	scanf("%d",&no);
	
	for(i=0;i<no;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<no;i++)
	{
		printf("%d\t",a[i]);
	}
	
}
