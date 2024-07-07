#include <stdio.h>
#include <conio.h>
int main()
{
	int year= 2001; // start year 2001
	
	while(year<=2020) //check year untill 2020
	{
		// check if leap year
		if (year%4==0)	{
			printf("%d \n",year); // print the year
		}
		year++;
	
	}
	getch();
}
