#include <stdio.h>
#include <conio.h>
void main()
{
	int a,b,c;
	printf("enter the value for a,b,c");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b&&a>c)
	{
		printf("a is greatest");
	}
	else if (b>a&&b>c)
	{
		printf("b is gretest");
	}
	else
	{
		printf("c is greatesr");
	}
	
	getch();
}
