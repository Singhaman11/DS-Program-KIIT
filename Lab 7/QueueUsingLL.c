//Queue works on the principle of First In First Out (FIFO).
//Queue using linked list.
#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
}*front = NULL, *rear = NULL;
void enqueue(int element)
{
    struct Node *new = (struct Node*) malloc(sizeof(struct Node));
    new -> data = element;
    new -> next = NULL;
    if(rear == NULL)
    {
        rear = new;
        front = new;
    }
    else
    {
        rear -> next = new;
        rear = new;
    }
}
int dequeue()
{
    struct Node *deleteNode = NULL;
    int d = 0;
    if(front == NULL)
    {
        printf("No element is present in the queue.\n");
        return -1;
    }
    else if(front->next == NULL)
    {
        d = front -> data;
        front = NULL;
        return d;
    }
    else
    {
        d = front -> data;
        deleteNode = front;
        front = front -> next;
        free(deleteNode);
        return d;
    }
}
int peek()
{
    if(front == NULL)
    {
        printf("No element is present in the queue.\n");
        return -1;
    }
    else
        return front->data;
}
void main()
{
    int c = 0, element = 0;
    while(c >= 0 && c < 4)
    {
        printf("Enter 1 to insert an element into the queue.\n");
        printf("Enter 2 to delete an element from the queue.\n");
        printf("Enter 3 to print front element of the queue.\n");
        printf("Enter 4 to exit.\n");
        scanf("%d", &c);
        switch(c)
        {
            case 1:
                printf("Enter the element to be pushed into the queue.\n");
                scanf("%d", &element);
                enqueue(element);
                break;
            case 2:
                if(peek() != -1)
                    printf("The popped element is %d.\n", dequeue(&front));
                break;
            case 3:
                if(peek() != -1)
                    printf("The front element in the queue is %d.\n", peek());
                break;
            default:
                exit(0);
        }
    }
}