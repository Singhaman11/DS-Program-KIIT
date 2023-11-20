/*
WAP to create a structure to store the information of n number of Employees. Employee’s information includes data members: Emp_id, Name, Designation, Basic_salary, HRA%, DA%. Display the information of employees with gross salary. Use array of structure.
Sample Input:                                           Sample Output:
Enter no.of employees: 2                                Employee Information:
Enter employee 1 information:
5678                                                    Employee ID: 5678
Avneesh                                                 Name: Avneesh
Professor                                               Designation: Professor
10000                                                   Basic Salary:10000
15%                                                     HRA %: 15%
45%                                                     DA %: 45%
Enter employee 2 information:                           Gross Salary: 16000
2301
Avantika                                                Employee ID: 2301
Professor                                               Name: Avantika
20000                                                   Designation: Professor
10%                                                     Basic Salary: 20000
35%                                                     HRA %: 10%
                                                        DA %: 35%
                                                        Gross Salary: 29000
*/
#include<stdio.h>
struct Employee
{
    int Emp_id;
    char Name[25];
    char Designation[25];
    float Basic_Salary;
    float HRA;
    float DA;
    float Gross_Salary;
};
void main()
{
    int n = 0;
    float hra = 0;
    float da = 0;
    printf("Enter the no. of employees\n");
    scanf("%d", &n);
    struct Employee Info[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter employee %d information:\n", (i + 1));
        printf("Enter employee id\n");
        scanf("%d", &Info[i].Emp_id);
        printf("Enter employee name\n");
        scanf("%s", Info[i].Name);
        printf("Enter employee designation\n");
        scanf("%s", Info[i].Designation);
        printf("Enter employee basic salary\n");
        scanf("%f", &Info[i].Basic_Salary);
        printf("Enter employee HRA (in %%)\n");
        scanf("%f", &Info[i].HRA);
        printf("Enter employee DA (in %%)\n");
        scanf("%f", &Info[i].DA);
        hra = (Info[i].HRA * Info[i].Basic_Salary) / 100; 
        da = (Info[i].DA * Info[i].Basic_Salary) / 100; 
        Info[i].Gross_Salary = hra + da + Info[i].Basic_Salary;    
        hra = 0;
        da = 0;
    }
    for (int i = 0; i < n; i++)
    {
        printf("Employee %d information:\n", (i + 1));
        printf("Employee ID: %d \n", Info[i].Emp_id);
        printf("Name: %s \n", Info[i].Name);
        printf("Designation: %s \n", Info[i].Designation);
        printf("Basic salary: %.2f \n", Info[i].Basic_Salary);
        printf("HRA: %.2f%% \n", Info[i].HRA);
        printf("DA: %.2f%% \n", Info[i].DA);
        printf("Gross Salary: %.2f \n\n", Info[i].Gross_Salary);    
    }
}