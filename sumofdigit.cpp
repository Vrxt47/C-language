#include<stdio.h>

main()
{
	int num,sum=0,firstdigit,lastdigit;
	
	printf("Enter any number");
	scanf("%d",&num);
	
	firstdigit=num%10;
	lastdigit=num;
	
	while(num >=10)
	{
		num=num/10;
	}
	lastdigit=num;
	sum=lastdigit+firstdigit;
	
	printf("sum is %d",sum);
}

