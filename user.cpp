#include <stdio.h>
#include <conio.h>

int main()
{

	char Name[20],DOB[20],PhoneNumber[20],country[20];
	printf("Enter Name ");
	scanf("%s",&Name);
	printf("Enter DOB ");
	scanf("%s",&DOB);
	printf("Enter PhoneNumber ");
	scanf("%s",&PhoneNumber);
	printf("Enter country ");
	scanf("%s",&country);
	
	printf("\n Hello my Name is %s",Name);
	printf("\n My DOB is %s",DOB);
	printf("\n My country is %s",country);
	printf("\n My PhoneNumber is +91 %s", PhoneNumber);
	getch();

}
