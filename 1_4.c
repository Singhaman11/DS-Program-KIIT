#include<stdio.h>
#include <stdio.h>
// Structure to represent a complex number
struct Complex
{
    float real;
    float imag;
};
struct Complex addComplex(struct Complex num1, struct Complex num2)
{
    struct Complex result;
    result.real = num1.real + num2.real;
    result.imag = num1.imag + num2.imag;
    return result;
}
void multiplyComplex(struct Complex *num1, struct Complex *num2)
{
    float real = num1->real * num2->real - num1->imag * num2->imag;
    float imag = num1->real * num2->imag + num1->imag * num2->real;
    num1->real = real;
    num1->imag = imag;
}
int main()
{
    struct Complex num1, num2, result;
    int choice;
    printf("Enter the real and imaginary parts of the first complex number: ");
    scanf("%f %f", &num1.real, &num1.imag);
    printf("Enter the real and imaginary parts of the second complex number: ");
    scanf("%f %f", &num2.real, &num2.imag);
    printf("Menu:\n");
    printf("1. Addition of two complex numbers\n");
    printf("2. Multiplication of two complex numbers\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
        case 1:
            result = addComplex(num1, num2);
            printf("Sum: %.2f + %.2fi\n", result.real, result.imag);
            break;
        case 2:
            multiplyComplex(&num1, &num2);
            printf("Product: %.2f + %.2fi\n", num1.real, num1.imag);
            break;

        default:
            printf("Invalid choice\n");
    }
    return 0;
}
