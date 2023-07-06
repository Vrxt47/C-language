#include<stdio.h>
main()
{
	int a=10;
	int *ptr;
	
	ptr=&a;
	
	printf("%d\n",a);
	printf("%d\n",ptr);
	printf("%d",*ptr);

}
