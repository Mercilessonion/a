#include <stdio.h>
union Employee1
{
    char Name[30];
    int Age;
    int Id;
    long Salary;
} U;

struct Employee2
{
    char Name[30];
    int Age;
    int Id;
    long Salary;
} S;

void main()
{
    printf("Enter Employee details: \n");
    printf("Enter Employee Id : ");
    scanf("%d", &S.Id);
    printf("Enter Employee Name : ");
    scanf("%s", &S.Name);
    printf("Enter Employee Age : ");
    scanf("%d", &S.Age);
    printf("Enter Employee Salary : ");
    scanf("%ld", &S.Salary);

    printf("\nEmployee  Values: \n");
    printf("Employee Id : %d\n", S.Id);
    printf("Employee Name : %s\n", S.Name);
    printf("Employee Age : %d\n", S.Age);
    printf("Employee Salary : %ld\n", S.Salary);

    printf("\nSize of UNION is : %d", sizeof(U));
    printf("\nSize of STRUCTURE : %d", sizeof(S));
}