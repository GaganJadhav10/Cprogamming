#include <stdio.h>
#include <conio.h>
int main()
{
	int i,j,k,c=1,row;
	printf("enter the no of row");
	scanf("%d",&row);
	for(i=0;i<=row;i++)
	{
		for(j=0;j<=row-i;j++)
		printf(" ");
		for(k=0;k<=i;k++)
		{
			if(k==0||i==0)
			c=1;
			else
			c=c*(i-k+1)/k;
			printf(" %d",c);
		}
		printf("\n");
	}
	return 0;
}
