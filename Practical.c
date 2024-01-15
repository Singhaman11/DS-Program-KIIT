/*Deque using Single linked list. 
Input restricted Deque: Insertion from front & deletion from both the ends.*/
#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
}*front = NULL, *rear = NULL;
int isEmpty();
void Enqueue(int n)
{
    struct Node *new = (struct Node*) malloc(sizeof(struct Node));
    new -> data = n;
    new -> next = NULL;
    if(rear == NULL)
    {
        rear = new;
        front = new;
    }
    else                                    //Insertion of node at the end.
    {
        rear -> next = new;
        rear = new;
    }
}
void Dequeue(int option)
{
    struct Node *deleteNode = NULL;
    if(isEmpty() == 1)
    {
        printf("No element is present in the deque.\n");
    }
    else if(front->next == NULL)
    {
        front = NULL;
    }
    else if(option == 1)                    //Deletion of node from the front.
    {
        deleteNode = front;
        front = front -> next;
        free(deleteNode);
    }
    else                                    //Deletion of node from the end.
    {
        struct Node *temp = front;
        deleteNode = rear;
        while(temp->next != rear)
        {
            temp = temp -> next;
        }
        temp -> next = NULL;
        rear = temp;
        free(deleteNode);
    }
}
int isEmpty()
{
    if(front == NULL)
    {
        return 1;                                   //1: Deque is empty
    }
    else
    {
        return 0;
    }
}
int Peek()
{
    if(isEmpty() == 1)
    {
        return -1;
    }
    else
    {
        return front->data;
    }
}
void Display()
{
    struct Node *temp = front;
    if(isEmpty() == 1)
    {
        printf("No element is present in the deque.");
    }
    while(temp != NULL)
    {
        printf("%d, ", temp -> data);
        temp = temp -> next;
    }
    printf("\n");
}
void main()
{
    int c = 0, element = 0, choice = 0, option = 0;
    while(c >= 0 && c < 6)
    {
        printf("Enter 1 to insert an element into the deque.\n");
        printf("Enter 2 to delete an element from the deque.\n");
        printf("Enter 3 to print front element of the deque.\n");
        printf("Enter 4 to to check whether deque is empty.\n");
        printf("Enter 5 to display the elements present in deque.\n");
        printf("Enter 6 to exit.\n");
        scanf("%d", &c);
        switch(c)
        {
            case 1:
                printf("Enter the element to be pushed into the deque.\n");
                scanf("%d", &element);
                Enqueue(element);
                break;
            case 2:
                printf("Enter 1 to pop the element from the front of deque.\n");
                printf("Enter 2 to pop the element from the end of deque.\n");
                scanf("%d", &option);
                Dequeue(option);
                break;
            case 3:
                if(Peek() != -1)
                    printf("The front element in the deque is %d.\n", Peek());
                else
                    printf("No element is present in the deque.\n");
                break;
            case 4:
                if(isEmpty() == 0)
                    printf("Deque is not empty.\n");
                else
                    printf("Deque is empty.\n");
                break;
            case 5:
                Display();
                break;
            default:
                exit(0);
        }
    }
}