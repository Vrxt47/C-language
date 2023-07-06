#include<stdio.h>
main()
{
	int cel,fer;
	printf("Enter Temperature in Celsius");
	scanf("%d",&cel);
	
	fer=((cel*9)/5)+32;
	printf("Temperature in Ferhenite is..%d",fer);
}
