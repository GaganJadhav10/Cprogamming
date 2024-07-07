#include <stdio.h>
#include <conio.h>
int arm (int n)
{
	int sum=0,rem,d;
	d=n;
	while(n>0)
	
	{
		rem=n%10;
		sum=sum+rem*rem*rem;
		n=n/10;
	}
	{
		if(sum==d)
		printf("armstrong");
		else
		printf("no");
	}
	
}
