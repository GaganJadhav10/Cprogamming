#include<stdio.h>

int add(int *p,int size); 
int main()
{
	int i,a[10];
	printf("Enter 10 numbers:");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}	

	printf("Sum=%d",add(a,10));

}
int add(int *p,int size)
{
	int i, sum=0; 
	printf("%p",&p[0]);
	for(i=0;i<10;i++)
	{

		sum=sum+p[i];

	}

	return sum;

}
