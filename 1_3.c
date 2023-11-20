#include <stdio.h>
struct Employee
{
    int emp_id;
    char name[50];
    char designation[50];
    float basic_salary;
    float hra_percentage;
    float da_percentage;
};
float calculateGrossSalary(struct Employee emp)
{
    float hra = (emp.hra_percentage / 100) * emp.basic_salary;
    float da = (emp.da_percentage / 100) * emp.basic_salary;
    return emp.basic_salary + hra + da;
}
int main()
{
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    struct Employee employees[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter details for Employee %d:\n", i + 1);
        printf("Emp-id: ");
        scanf("%d", &employees[i].emp_id);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Designation: ");
        scanf("%s", employees[i].designation);
        printf("Basic Salary: ");
        scanf("%f", &employees[i].basic_salary);
        printf("HRA Percentage: ");
        scanf("%f", &employees[i].hra_percentage);
        printf("DA Percentage: ");
        scanf("%f", &employees[i].da_percentage);
    }
    printf("\nEmployee Information with Gross Salary:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Employee %d:\n", i + 1);
        printf("Emp-id: %d\n", employees[i].emp_id);
        printf("Name: %s\n", employees[i].name);
        printf("Designation: %s\n", employees[i].designation);
        printf("Basic Salary: %.2f\n", employees[i].basic_salary);
        printf("Gross Salary: %.2f\n", calculateGrossSalary(employees[i]));
        printf("\n");
    }
    return 0;
}
