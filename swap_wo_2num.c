#include<stdio.h>
void main()
{
	int a=2,b=7;
	a = a + b;
	b = a - b;
	a = a - b;
	printf("a=%d, b=%d",a,b);
	getch();
}
