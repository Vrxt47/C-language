#include<stdio.h>
int vrut(int c);

int main()
{
	int no;
	printf("Enter no ");
	scanf("%d",&no);
	vrut(no);
	printf("%d",vrut(no));
}
int vrut(int c)
{
	return c*c*c;
}
