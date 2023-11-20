// WAP to display the upper and lower triangular matrix of a 2D array.
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
    printf("\nElements of upper triangular matrix\n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if((i == j) || (i < j))
                printf("%d, ", arr[i][j]);
        }
    }
    printf("\nElements of lower triangular matrix\n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if((i == j) || (i > j))
                printf("%d, ", arr[i][j]);
        }
    }
}