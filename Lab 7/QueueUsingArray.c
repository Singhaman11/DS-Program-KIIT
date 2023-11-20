//Queue works on the principle of First In First Out (FIFO).
//Queue using array.
#include<stdio.h>
#include<stdlib.h>
#define QUEUE_SIZE 5
int front = -1, rear = -1;
int queue[QUEUE_SIZE];
void enqueue(int element)
{
    if(rear == (QUEUE_SIZE - 1))
        printf("Overflow\n");
    else
    {
        rear++;
        queue[rear] = element;
        if(rear == 0)
            front++;
    }
}
int dequeue()
{
    if(front > rear)
    {
        printf("No element present in the queue.\n");
        return -1;
    }
    else
        return queue[front++];
}
int peek()
{
    if((front == -1) || (front > rear))
    {
        printf("No element present in the queue.\n");
        return -1;
    }
    else
        return queue[front];
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
                printf("Enter the element to be inserted into the queue.\n");
                scanf("%d", &element);
                enqueue(element);
                break;
            case 2:
                if(peek() != -1)
                    printf("The deleted element is %d.\n", dequeue());
                break;
            case 3:
                if(peek() != -1)
                    printf("The front element of the queue is %d.\n", peek());
                break;
            default:
                exit(0);
        }
    }
}