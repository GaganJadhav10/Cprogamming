#include<stdio.h> 
#include<string.h> 

union Employee {
    int id;
    char name[50];
    char department[50]; 
    float salary;
};

int main() {
    union Employee emp1; 
    union Employee emp2;
    
    printf("\n Employee 1 details"); 
    emp1.id=40; 
    strcpy(emp1.name,"Rachana"); 
    strcpy(emp1.department,"Technology");
    emp1.salary=150000.00;
    
    printf("\n Employee id=%d \n",emp1.id); 
    printf("Employee name=%s \n",emp1.name);
    printf("Employee department=%s \n",emp1.department);
    printf("Employee salary=%f \n",emp1.salary);
    // Only latest value is printed
    
    printf("\n Employee 2 details"); emp2.id=29;
    printf("\n Employee id=%d \n",emp2.id); 
    
    strcpy(emp2.name,"chandrakshi"); 
    printf("Employee name=%s \n",emp2.name); 
    
    strcpy(emp2.department,"Humanities");
    printf("Employee department=%s \n",emp2.department);
    
    emp2.salary=50000.70;
    printf("Employee salary=%f \n",emp2.salary);
    // all values are printed one by one
    
    return 0;
}
