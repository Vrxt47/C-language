#include<stdio.h>
main()
{
	int a=10,b=20,c;
	printf("Before swapping the values\n");
	printf("A is %d\n",a);
	printf("B is %d\n",b);
	
	c=a;
	a=b;
	b=c;
	
	printf("After swapping the values\n");
	printf("A is %d\n",a);
	printf("B is %d",b);
}
