#include <stdio.h>
// Function to compare two numbers using call by value
void compareByValue(int a, int b) {
    if (a < b) {
        printf("%d is smaller than %d (Call by Value).\n", a, b);
    } else if (a > b) {
        printf("%d is smaller than %d (Call by Value).\n", b, a);
    } else {
        printf("Both numbers are equal (Call by Value).\n");
    }
}

// Function to compare two numbers using call by address
void compareByAddress(int *a, int *b) {
    if (*a < *b) {
        printf("%d is smaller than %d (Call by Address).\n", *a, *b);
    } else if (*a > *b) {
        printf("%d is smaller than %d (Call by Address).\n", *b, *a);
    } else {
        printf("Both numbers are equal (Call by Address).\n");
    }
}
int main() 
{
    int num1, num2;
    printf("Enter two numbers: \n");
    scanf("%d %d", &num1, &num2);
    // Call the function using call by value
    compareByValue(num1, num2);
    // Call the function using call by address
    compareByAddress(&num1, &num2);
    return 0;
}


