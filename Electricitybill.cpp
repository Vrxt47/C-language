#include<stdio.h>
main()
{
	int unit,amt,total;
	printf("Enter number of units used..");
	scanf("%d",&unit);
	
	if(unit<=50){
		amt=unit*0.5;
		
	}
	else if(unit>50 && unit<=150)
	{
		amt=25+((unit-50)*0.75);	
		
	} 
	else if(unit>150 && unit<=250)
	{
		amt=100+((unit-150)*1.2);
	} else
	{
		amt=220+((unit-250)*1.5);
	}
	total=amt+unit*0.2;
	printf("Your bill is..%d",total);
	
}
