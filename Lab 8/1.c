//Queue works on the principle of First In First Out (FIFO).
//Queue using linked list.
#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
}*front1 = NULL, *rear1 = NULL, *front2 = NULL, *rear2 = NULL;
void enqueue(int element, int c)
{
    struct Node *new = (struct Node*) malloc(sizeof(struct Node));
    new -> data = element;
    new -> next = NULL;
    if(rear1 == NULL)
    {
        rear1 = new;
        front1 = new;
        rear2 = new;
        front2 = new;
    }
    else
    {
        if(c == 2)
        {
            rear1 -> next = new;
            rear1 = new;
            front2 = rear1;
        }
        else
        {
            new -> next = front1;
            front1 = new;
            rear2 = front1;
        }
    }
}
int dequeue()
{
    struct Node *deleteNode = NULL;
    int d = 0;
    if(front1 == NULL)
    {
        printf("No element is present in the queue.\n");
        return -1;
    }
    else if(front1->next == NULL)
    {
        d = front1 -> data;
        front1 = NULL;
        return d;
    }
    else
    {
        d = front1 -> data;
        deleteNode = front1;
        front1 = front1 -> next;
        free(deleteNode);
        return d;
    }
}
int peek()
{
    if(front1 == NULL)
    {
        printf("No element is present in the queue.\n");
        return -1;
    }
    else
        return front1->data;
}
void main()
{
    int c = 0, element = 0;
    while(c >= 0 && c < 4)
    {
        printf("Enter 1 to insert an element into the queue.\n");
        printf("Enter 2 to delete an element from the queue.\n");
        printf("Enter 3 to print front1 element of the queue.\n");
        printf("Enter 4 to exit.\n");
        scanf("%d", &c);
        switch(c)
        {
            case 1:
                printf("Enter the element to be pushed into the queue.\n");
                scanf("%d", &element);
                enqueue(element, c);
                break;
            case 2:
                if(peek() != -1)
                    printf("The popped element is %d.\n", dequeue(&front1));
                break;
            case 3:
                if(peek() != -1)
                    printf("The front1 element in the queue is %d.\n", peek());
                break;
            default:
                exit(0);
        }
    }
}