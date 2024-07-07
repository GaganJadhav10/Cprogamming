#include <stdio.h>
#include <conio.h>
int main()
{
	int year;
	printf("Enter the year");
	scanf("%d",&year);
	(year%4==0)? printf("the year %d is leap year",year): printf("year %d is not leap year",year);
	getch();
}
