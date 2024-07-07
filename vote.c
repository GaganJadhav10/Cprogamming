#include <stdio.h>
#include <conio.h>
int main()
{
	int age;
	printf("enter the age ");
	scanf("%d",&age);
	
	if(age<18)
	{
		printf("not eligble vote \n");
		printf("junior");
	}
	else if(age>18 && age<65)

	{
		printf("eligble to vote \n");
		printf("adult");
	}	
	else
	{
		printf("eligble to vote \n");
		printf("senior");
	}
	getch();
}
