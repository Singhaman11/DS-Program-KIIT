// WAP to display the elements in the main diagonal, the diagonal above and below the main diagonal of a matrix.
#include<stdio.h>
void main()
{
    int n = 0;
    printf("Enter the size of the matrix \n");
    scanf("%d", &n);
    int arr[n][n];
    printf("Enter %d elements \n", (n * n));
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
            scanf("%d", &arr[i][j]);
    }
    printf("Diagonal elements of an array\n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i == j)
                printf("%d, ", arr[i][j]);
        }
    }
    printf("\nElements above the diagonal of an array \n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i < j)
                printf("%d, ", arr[i][j]);
        }
    }
    printf("\nElements below the diagonal of an array \n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i > j)
                printf("%d, ", arr[i][j]);
        }
    }
}