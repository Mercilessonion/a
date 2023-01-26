#include<stdio.h>
union Employee_1
{
    int Id;
    char Name[25];
    int Age;
    long Salary;
};

struct Employee_2
{
	int Id;
    char Name[25];
    int Age;
    long Salary;
}str_emp;

void main()
{
    union Employee_1 uni_emp;
    printf("Enter Employee 1 details (UNION): \n");
    printf("\nEnter Employee Id : ");
    scanf("%d",&uni_emp.Id);
    
    printf("Employee 1 Values: ");
    printf("Employee Id : %d\n",uni_emp.Id);
    printf("\n\nEnter Employee Name : ");
    scanf("%s",uni_emp.Name);
    printf("Employee Name : %s\n",uni_emp.Name);
    printf("\n\nEnter Employee Age : ");
    scanf("%d",&uni_emp.Age);
    printf("Employee Age : %d\n",uni_emp.Age);
    printf("\n\nEnter Employee Salary : ");
    scanf("%ld",&uni_emp.Salary);
    printf("Employee Salary : %ld\n",uni_emp.Salary);
    
    
    printf("Enter Employee 1 details (STRUCTURE): \n");
    printf("\nEnter Employee Id : ");
    scanf("%d",&str_emp.Id);
    printf("\n\nEnter Employee Name : ");
    scanf("%s",str_emp.Name);
    printf("\n\nEnter Employee Age : ");
    scanf("%d",&str_emp.Age);
    printf("\n\nEnter Employee Salary : ");
    scanf("%ld",&str_emp.Salary);
    
    printf("Employee 2 Values: ");
    printf("Employee Id : %d\n",str_emp.Id);
    printf("Employee Name : %s\n",str_emp.Name);
    printf("Employee Age : %d\n",str_emp.Age);
    printf("Employee Salary : %ld\n",uni_emp.Salary);
    
    printf("\nSize of Employee_1 by UNION is : %d",sizeof(uni_emp));
	printf("\nSize of Employee_2 by STRUCTURE : %d",sizeof(str_emp));
}