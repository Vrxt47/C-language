#include<stdio.h>

inline int vrut(int c)
{
	return c*c*c;
} 
int main()
{
	int no;
	printf("Enter no ");
	scanf("%d",&no);
	vrut(no);
	printf("%d",vrut(no));
}

