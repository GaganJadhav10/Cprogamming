 // Online C compiler to run C program online
#include <stdio.h>

struct emp {
    char name[20];
    int empNo;
    int expr;
    int salary;
};

int main() {
    // same logic for all 100 employees
    // struct emp emp[100]
    struct emp emp[100] = {
    	
        {"Sam", 001, 2, 5000},
    	{"John", 002, 7, 9000},
    	{"Max", 003, 5, 7500},
        {"Marc", 004, 4, 7000},
        {"Tom", 005, 8, 11000},
	};
 	int i;    
    for (i=0;i<100;i++) {
	
        // printf("%s \n", emp[i].name);
        if (emp[i].expr>=5 && emp[i].salary<10000){
            printf("Name: \t\t%s \n", emp[i].name);
            printf("ID:  \t\t %d \n", emp[i].empNo);
            printf("Expirence: \t %d \n", emp[i].expr);
            printf("Salary: \t %d \n", emp[i].salary);
        };
        printf(" \n");
        printf(" \n");
    };
    

    return 0;
}
