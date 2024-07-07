#include <stdio.h>
#include <conio.h>

int main()
{
	int rows=5,i,j,k;
	for(i=0;i<rows;i++)
	{
		for(j=0;j<(rows-i)-1;j++)
		{
			printf(" ");
		}
		for (k=0;k<i+1;k++)
		{
			if(k==0||k==i||i==rows-1)
			{
				printf("* ");
			}
			else 
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	return 0;
}
