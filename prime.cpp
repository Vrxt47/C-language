#include<stdio.h>
main()
{
	int a,temp=0,i,flag=0;
	printf("Enter Number");
	scanf("%d",&a);  
	
	temp=a/2;  
	
	for(i=2;i<=temp;i++)
	{
		if(a%i==0)
		{
			printf("Not Prime");
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("prime");
		
	}
}
