#include<stdio.h>
#include<string.h>
main()
{
	char a[]={'v','r','u','t'};
	char b[]="HELLO";
	
	printf("%s\n",a);
	printf("%s\n",b);
	printf("%d\n",strlen(a));
	printf("%s\n",strupr(a));
	printf("%s\n",strlwr(b));
	printf("%s\n",strcat(a,b));
	printf("%s\n",strrev(a));
	
}
