#include<stdio.h>
main()
{
	float base,hra,da,ta,gross;
	printf("Enter your salary");
	scanf("%f",&base);
	
	hra=(10*base)/100;
	da=(5*base)/100;
	ta=(8*base)/100;
	
	gross=base+hra+da+ta;
	printf("\nYour gross salary is..%f",gross);
}
