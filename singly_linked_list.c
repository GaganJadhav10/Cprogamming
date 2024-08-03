#include <stdio.h>


struct stud
{
	int roll;
	char name [30];
	int age;
	struct stud *next;
};
int main()
{
	struct stud n1,n2,n3;
	struct stud *p;
	printf("enter rollno,name and age \n");
	printf("enter details of student 1 \n");
	scanf("%d %s %d",&n1.roll,&n1.name,&n1.age);
	printf("enter details of student 2 \n");
	scanf("%d %s %d",&n2.roll,&n2.name,&n2.age);
	printf("enter details of student 3 \n");
	scanf("%d %s %d",&n3.roll,&n3.name,&n3.age);
	
	n1.next=&n2;
	n2.next=&n3;
	n3.next=NULL;
	p=&n1;
	
	while(p!=NULL)
	{
		printf("%d %s %d \n",p->roll,p->name,p->age);
		
		p=p->next;
	}
	return 0;
}
