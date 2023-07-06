#include<stdio.h>
main()
{
	char value;
	printf("Enter value");
	scanf("%c",&value);
	
	if((value>=65 && value<=90) || (value>=97 && value<=122))
	{
		printf("Alphabets");
	}else if(value>=48 && value<=55)
	{
		printf("Numbers");
	}else 
	{
		printf("Special Charcters");
	}
}
