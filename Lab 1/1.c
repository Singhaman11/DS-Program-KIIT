/*
WAP to read two numbers and compare the numbers using function call by value and call by address.
Sample Input:
    Enter two numbers: 50 80
Sample Output:
    50 is smaller than 80
Sample Input:
    Enter two numbers: 40 10
Sample Output:
    40 is greater than 10
Sample Input:
    Enter two numbers: 50 50
Sample Output:
    Both numbers are same
*/
#include<stdio.h>
void callbyvalue(int x, int y)
{
    if(x < y)
        printf("%d is smaller than %d \n", x, y);
    else if(x > y)
        printf("%d is greater than %d \n", x, y);
    else
        printf("%d is equal to %d \n", x, y);
}
void callbyreference(int *x, int *y)
{
    if(*x < *y)
        printf("%d is smaller than %d \n", *x, *y);
    else if(*x > *y)
        printf("%d is greater than %d \n", *x, *y);
    else
        printf("%d is equal to %d \n", *x, *y);
}
void main()
{
    int a = 0; 
    int b = 0;
    printf("Enter 2 nos. a & b \n");
    scanf("%d %d", &a, &b);
    callbyvalue(a, b);
    callbyreference(&a, &b);
}