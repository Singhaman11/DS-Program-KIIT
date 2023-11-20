#include <stdio.h>
#define MAX_DEGREE 100
void addPolynomials(int result[], int poly1[], int poly2[], int degree1, int degree2) {
    int maxDegree = degree1 > degree2 ? degree1 : degree2;
    for (int i = 0; i <= maxDegree; i++) {
        result[i] = (i <= degree1 ? poly1[i] : 0) + (i <= degree2 ? poly2[i] : 0);
    }
}
void multiplyPolynomials(int result[], int poly1[], int poly2[], int degree1, int degree2) {
    int maxDegree = degree1 + degree2;
    for (int i = 0; i <= maxDegree; i++) {
        result[i] = 0;
        for (int j = 0; j <= i; j++) {
            if (j <= degree1 && (i - j) <= degree2) {
                result[i] += poly1[j] * poly2[i - j];
            }
        }
    }
}

void printPolynomial(int poly[], int degree) {
    for (int i = degree; i >= 0; i--) {
        if (poly[i] != 0) {
            printf("%dx^%d", poly[i], i);
            if (i != 0) {
                printf(" + ");
            }
        }
    }
    printf("\n");
}
int main() {
    int degree1, degree2;
    printf("Enter the degree of the first polynomial: ");
    scanf("%d", &degree1);
    int poly1[MAX_DEGREE];
    printf("Enter the coefficients of the first polynomial: \n");
    for (int i = degree1; i >= 0; i--) {
        scanf("%d", &poly1[i]);
    }
    printf("Enter the degree of the second polynomial: ");
    scanf("%d", &degree2);
    int poly2[MAX_DEGREE];
    printf("Enter the coefficients of the second polynomial: \n");
    for (int i = degree2; i >= 0; i--) {
        scanf("%d", &poly2[i]);
    }
    int resultAdd[MAX_DEGREE], resultMultiply[MAX_DEGREE];
    addPolynomials(resultAdd, poly1, poly2, degree1, degree2);
    multiplyPolynomials(resultMultiply, poly1, poly2, degree1, degree2);
    printf("Polynomial Addition: ");
    printPolynomial(resultAdd, (degree1 > degree2 ? degree1 : degree2));
    printf("Polynomial Multiplication: ");
    printPolynomial(resultMultiply, degree1 + degree2);
    return 0;
}
