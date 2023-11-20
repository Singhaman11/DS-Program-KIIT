// WAP for polynomial addition and multiplication.
#include<stdio.h>
#include<stdlib.h>
struct Polynomial
{
    int highest_order;
    int *coefficient;
};
void main()
{
    int n = 0, highest_order_among2 = 0, highest_orderP1 = 0, highest_orderP2 = 0, highest_order_among21 = 0;
    int *sum;
    // printf("Enter no. of polynomial \n");
    // scanf("%d", &n);
    struct Polynomial Add_Multiply[2];
    for(int i = 0; i < 2; i++)
    {
        printf("Enter highest order of polynomial%d \n", (i + 1));
        scanf("%d", &Add_Multiply[i].highest_order);
        Add_Multiply[i].coefficient = (int*) malloc((Add_Multiply[i].highest_order + 1) * sizeof(int));
        for(int j = Add_Multiply[i].highest_order; j >= 0; j--)
        {
            printf("Enter the coefficient for x^%d \n", j);
            scanf("%d", &Add_Multiply[i].coefficient[j]);
        }
    }
    highest_orderP1 = Add_Multiply[0].highest_order;
    highest_orderP2 = Add_Multiply[1].highest_order;
    highest_order_among2 = (Add_Multiply[0].highest_order >= Add_Multiply[1].highest_order) ? Add_Multiply[0].highest_order : Add_Multiply[1].highest_order;
    highest_order_among21 = highest_order_among2;
    sum = (int*) malloc((highest_order_among2 + 1) * sizeof(int));
    for(int i = highest_order_among2; i >= 0; i--)
    {
        if(highest_order_among21 == highest_orderP1 && highest_order_among21 == highest_orderP2)
        {
            sum[i] = Add_Multiply[0].coefficient[i] + Add_Multiply[1].coefficient[i];
            highest_order_among21--;
            highest_orderP1--;
            highest_orderP2--;
        }
        else if(highest_order_among21 == highest_orderP1)
        {
            sum[i] = Add_Multiply[0].coefficient[i];
            highest_order_among21--;
            highest_orderP1--;
        }
        else
        {
            sum[i] = Add_Multiply[1].coefficient[i];
            highest_order_among21--;
            highest_orderP2--;
        }
    }
    printf("Sum = ");
    for(int i = highest_order_among2; i >= 0; i--)
    {
        if(i == 0)
            printf("%d \n", sum[i]);
        else
            printf("%dx^%d + ", sum[i], i);
    }
    /*
    for(int i = 0; i < n; i++)
    {
        printf("Polynomial %d: ", (i + 1));
        for(int j = Add_Multiply[i].highest_order; j >= 0; j--)
            printf("%dx^%d + ", Add_Multiply[i].coefficient[j], j);
    }
    */
}