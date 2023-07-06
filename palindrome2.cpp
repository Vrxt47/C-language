#include<stdio.h>
#include<string.h>
main()
{
	char a[1000],temp,i,b=0;
	printf("Enter Statement");
	scanf("%s",&a); 
	
	temp=strlen(a); 
	for(i=0;i<temp/2;i++)
	{
		if(a[i]==a[temp-i-1])
		{
			b++; \
		}
	}
	if(b==i)
	{
		printf("palindrome");

	}else
	{
		printf("not palindrome");
	}
}
