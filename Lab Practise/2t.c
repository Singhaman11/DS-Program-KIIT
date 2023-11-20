/*
WAP to merge two single linked list.
Input:
    1st list: 2, 3, 4, 6, 7
Input:
    2nd list: 12, 15, 20, 45
Output: 2, 12, 3, 15, 4, 20, 6, 45, 7,
*/
#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void createList(struct Node **head, int n)
{
    struct Node *temp = NULL;
    if(n <= 0)
        printf("List size must be greater than zero.\n");
    else
    {
        printf("Enter data of node1: ");
        scanf("%d", &(*head) -> data);
        (*head) -> next = NULL;
        temp = *head;
        for(int i = 2; i <= n; i++)
        {
            struct Node *newNode = (struct Node*) malloc(sizeof(struct Node)); 
            printf("Enter data of node%d: ", i);
            scanf("%d", &newNode -> data);
            newNode -> next = NULL;
            temp -> next = newNode;
            temp = temp -> next;
        }
    }
}
void mergeList(struct Node **head, struct Node **head1, int g)
{
    struct Node *prev1 = *head, *current1 = *head;
    struct Node *prev2 = *head1, *current2 = *head1;

    while (current1 != NULL && current2 != NULL)
    {
        prev1 = current1;
        current1 = current1->next;

        prev2 = current2;
        current2 = current2->next;

        prev1->next = prev2;
        prev2->next = current1;
    }

    if (g == 1)
    {
        prev1->next = current2;
    }
    else if (g == 2)
    {
        prev1->next = prev2;
    }
}

void main()
{
    int n = 0, n1 = 0, g = 0;
    struct Node *head = (struct Node*) malloc(sizeof(struct Node));
    struct Node *head1 = (struct Node*) malloc(sizeof(struct Node));
    struct Node *temp = NULL;
    printf("Enter the total number of nodes in list1: ");
    scanf("%d", &n);
    createList(&head, n);
    printf("Enter the total number of nodes in list2: ");
    scanf("%d", &n1);
    createList(&head1, n1);
    g = (n != n1) ? ((n > n1) ? 1 : 2) : 0;
    mergeList(&head, &head1, g);
    temp = head;
    while(temp != NULL)
    {
        printf("%d, ", temp -> data);
        temp = temp -> next;
    }
}