/*
WAP to create an array of n elements using dynamic memory allocation. Calculate sum of all the prime elements of the array using function and de-allocate the memory of the array after its use.
Sample Input:
Enter size of the array: 5
Enter array elements: 3 9 7 4 8
Sample Output:
Sum = 10
*/
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *ptr;
    int n = 0, sum = 0, c = 0;
    printf("Enter the size of the array \n");
    scanf("%d", &n);
    ptr = (int*) malloc(n * sizeof(int));
    printf("Enter %d elements\n", n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
        for (int j = 1; j <= ptr[i]; j++)
        {
            if(ptr[i] % j == 0) 
                c++;
        }
        if(c == 2)
            sum = sum + ptr[i];
        c = 0;
    }
    printf("Sum = %d", sum);
    free(ptr);
}