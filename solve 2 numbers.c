#include <stdio.h>
#include <conio.h>
int main()
{
	int repeat = 0;
	do {
	int a,b,choice;
	printf("enter the value of a \n");
	scanf("%d",&a);
	printf("enter the value of b \n");
	scanf("%d",&b);
	printf("1.add \n");
	printf("2.sub \n");
	printf("3.mult \n");
	printf("4.divide \n");
	
	printf("\n enter your choice ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1: 
			printf("%d \n",a+b);
			break;
		case 2:
			printf("%d \n",a-b);
			break;
		case 3:
			printf("%d \n",a*b);
			break;
		case 4:
			printf("%d \n",a/b);
			break;
		default:
		    printf("wrong");
	}
	
	printf("to repeat enter 0 or to stop enter 1 \n");
	scanf("%d",&repeat);
} while(repeat==0);

}
