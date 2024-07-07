#include <stdio.h>
int gcd (int a, int b)
{
	if (b!=0)
	{
		return gcd (b,a%b);
	}
	else
	return a;
}
 
int main()
{
	int a,b;
	
	printf("enter two numbers");
	scanf("%d %d",&a,&b);
	
	printf("%d %d & gcd %d",a,b,gcd (a,b));
}
