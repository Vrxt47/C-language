#include<stdio.h>
main()
{
	
	int a[]={10,20,30,40,50,60,70,80,1111,1212};
	
	int length;
	
	length = sizeof (a) /sizeof a[0];
	
	printf("%d",length);
	
}
