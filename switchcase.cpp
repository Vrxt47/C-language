#include<stdio.h>
main()
{
	int no;
	printf("Enter your choice");
	scanf("%d",&no);
	
	switch(no)
	{
		case 1:
		{
			printf("\nMonday");
			break;
		}
		case 2:
		{
			printf("\nTuesday");
			break;
		}
		case 3:
		{
			printf("\nWednesday");
			break;
		}
		case 4:
		{
			printf("\nThursday");
			break;
		}
		case 5:
		{
			printf("\nFriday");
			break;
		}
		case 6:
		{
			printf("\nSaturday");
			break;
		}
		case 7:
		{
			printf("\nSunday");
			break;
		}
	}
}
