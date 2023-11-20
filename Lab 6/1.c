#include<stdio.h>
struct Node
{
    int info;
    struct Node *next;
}*top = NULL;
void push(int item)
{
    struct Node *new = (struct Node*) malloc(sizeof(struct Node));
    new -> info = item;
    new -> next = NULL;
    if(top == NULL)
        top = new;
    else
    {
        new -> next = top;
        top = new;
    }
}