#include<stdio.h>
#include<stdlib.h>
main()
{
	FILE *fp;
	
	fp= fopen("om.txt","w");
	
	if(fp == NULL)
	{
		printf("Not created");
	}
	else
	{
		printf("Found");
		
	}
}
