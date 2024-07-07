#include <stdio.h>
#include <conio.h>
int main ()
{
	int a,b,c;
	printf("enter the value of a ");
	scanf("%d",&a);
	printf("enter the value of b ");
	scanf("%d",&b);
	c=a+b;
	printf(" \n the added value of c=%d",c);
	c=a-b;
	printf("\n the subracted value of c=%d",c);
	c=a*b;
	printf("\n the multiplied value of c=%d",c);
	c=a/b;
	printf("\n the divided value of c=%d",c);
	getch();
}
