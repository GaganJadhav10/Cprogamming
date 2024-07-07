#include <stdio.h>
#include <conio.h>
int main()
{
	int rows,i,j;
	printf("enter the value of rows");
	scanf("%d",&rows);
	
	for(i=0;i<rows;i++)
	{
		for(j=0;j<rows;j++)
		{
			if(i>0 && i<rows-1 && j>0 && j<rows-1)
			{
				printf("  ");
			}
			else
			{
				printf(" *");
			}
		}	
		printf("\n");
	}
	return 0;
}
