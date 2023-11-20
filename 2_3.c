#include <stdio.h>

void displayDiagonals(int matrix[][10], int size) {
    printf("Main Diagonal:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", matrix[i][i]);
    }
    printf("\n");

    printf("Diagonal Above Main Diagonal:\n");
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            printf("%d ", matrix[i][j]);
        }
    }
    printf("\n");

    printf("Diagonal Below Main Diagonal:\n");
    for (int i = 1; i < size; i++) {
        for (int j = 0; j < i; j++) {
            printf("%d ", matrix[i][j]);
        }
    }
    printf("\n");
}

int main() {
    int size;
    printf("Enter the size of the matrix: ");
    scanf("%d", &size);

    int matrix[10][10];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    displayDiagonals(matrix, size);

    return 0;
}