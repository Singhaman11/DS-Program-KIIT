//
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int isEmpty();
struct Node
{
    char data;
    struct Node *next;
}*head = NULL;
void push(char element)
{
    struct Node *new = (struct Node*) malloc(sizeof(struct Node));
    new -> data = element;
    new -> next = NULL;
    if(head != NULL)
        new -> next = head;
    head = new;
}
void pop()
{
    struct Node *deleteNode = NULL;
    if(isEmpty() == 1)
        printf("No element is present in the stack.\n");
    else if(head->next == NULL)
        head = NULL;
    else
    {
        deleteNode = head;
        head = head -> next;
        free(deleteNode);
    }
}
char peek()
{
    if(isEmpty() == 1)
        return -1;
    else
        return head->data;
}
int isEmpty()
{
    if(head == NULL)
        return 1;
    else
        return 0;
}
int Infix_to_Postfix(char arr[])
{
    struct Node *top1 = NULL;
    int n = strlen(arr);
    for(int i = 0; i < n; i++)
    {
        if((arr[i] == '^' && priority > 1) || (arr[i] == '*' && priority > 4) || (arr[i] == '/' && priority > 4) || (arr[i] == '%' && priority > 4) || (arr[i] == '+' && priority > 6) || (arr[i] == '-' && priority > 6) || arr[i] == ' ' || arr[i] == '(')
            push(arr[i]);
        else if(arr[i] == ' ' || arr[i] == ' ' || arr[i] == ')')
        {
            while(peek() != ')')
            {

                char element = peek(&top1);
                if(element == -1)
                    return 0;
                if((arr[i] == ' ' && element == ' ') || (arr[i] == ' ' && element == ' ') || (arr[i] == ')' &&  element == '('))
                    pop(&top1);
            }
        }   
    }
    if(peek(&top1) == -1)
        return 1;
}
int priority()
{
    if(peek() == '^')
        return 1;
    else if(peek() == '*')
        return 2;
    else if(peek() == '/')
        return 3;
    else if(peek() == '%')
        return 4;
    else if(peek() == '+')
        return 5;
    else if(peek() == '-')
        return 6;
}
void main()
{
    int c = 0;
    char character[100];
    memset(character, '\0', 100);
    printf("Enter the string.\n");
    scanf("%s", character);
    if(Infix_to_Postfix(character) == 1)
        printf("VALID\n");
    else
        printf("INVALID\n");
}