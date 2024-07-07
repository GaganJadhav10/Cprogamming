#include <stdio.h>
int main()
{
	int num,a=0,b=1,c,i;
	printf("enter the num  ");
	scanf("%d",&num );
	for(i=1;i<=num;i++)
	{
		printf("%d ",a);
		c=a+b;
		a=b;
		b=c;
	}
	getch();
}
