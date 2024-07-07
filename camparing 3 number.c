#include <stdio.h>
#include <conio.h>
int main()
{
	int a=7,b=3,c=4;
	if (a>b)
	{
		if (a>c)
		{
			printf("the value of a is greater");	
		}
		else
		{
			printf("the value of c is greater");	
		}
	}
	else if (b>a)
	{
		if (b>c)
		{
			printf("the value of b is greater");	
		}
		else
		{
			printf("the value of c is greater");	
		}
	}

	getch();
}

