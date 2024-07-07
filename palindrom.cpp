#include <stdio.h>
#include <conio.h>
int main ()
{
	int num,a,r,sum=0;
	printf("enter the num ");
	scanf("%d",&num);
	a=num;
	while(num>0)
	{
		r=num%10;
		sum=r+(sum*10);
		num=num/10;	
	}
	if(a==sum)
	printf("palindrome");
	else
	printf("no palindrome");
	getch();
	
}


