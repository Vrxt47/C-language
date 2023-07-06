#include<stdio.h>
main()
{
	int num,temp,x,sum=0;
	printf("Enter num");
	scanf("%d",&num); //121
	temp=num;  
	while(num>0)
	{
		x=num%10; //121/10 
		sum=(sum*10)+x;
		num=num/10;
	}
	if(temp == sum)
	{
		printf("palindrome");
	}
	else
	{
		printf("NOT");
	}
}
