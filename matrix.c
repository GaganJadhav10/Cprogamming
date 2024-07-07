#include <stdio.h>

void transpose (int a[3][3])
{
	int i,j;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d \t",a[j][i]);
		}
		printf("\n");
	}
}


int main()
{
	int i,j,a[3][3];
	
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
	{
		printf(" enter the number a[%d][%d] ",i,j);
		scanf("%d", &a[i][j]);
	}
	
	}
	
	printf ("original Matrix \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d \t",a[i][j]);
		}
		printf("\n");
	}
	
	printf("transpose Matrix \n");
	transpose (a);
	return 0;
}

