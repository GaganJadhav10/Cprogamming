#include <stdio.h>

struct stud
{
    int rollno;
    char dept_code[25];
    float cgpa;
};

int main()
{
    struct stud class[100], t;

    int j, k ,n;
	printf("Enter no. of students: \n");
    scanf("%d",&n);

	//for input of students details
    for(k=0; k<n; k++)
    {
        printf("enter student roll no deptcode cgpa: \n");
		scanf("%d %s %f", &class[k].rollno, class[k].dept_code, &class[k].cgpa);
    }

	// sorting using swaping
    for(j=0; j<n-1; j++)
    {
        for(k=j+1; k<n; k++)
        {
            if (class[j].rollno > class[k].rollno)
            {
                t = class[j];
                class[j] = class[k];
                class[k] = t;
            }
        }
    }

    for(j=0; j<n; j++)
    {
        printf("%d %s %f\n", class[j].rollno, class[j].dept_code, class[j].cgpa);
    }

}
