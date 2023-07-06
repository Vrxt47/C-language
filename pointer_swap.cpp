#include<stdio.h>
swap(int *a, int *b);

main()
{
	int x,y;
	printf("Enter X & Y");
	scanf("%d %d",&x,&y);
	
	swap(&x,&y);
	printf("%d",x);
	printf("%d",y);	
}

swap(int *a,int *b)
{
	int temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
	
}
