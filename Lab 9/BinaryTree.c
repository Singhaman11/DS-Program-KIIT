//Create a complete binary tree with the following as node values: 12, 56, 64, 09, 16, 20, 38, 34, 21, 26 using the linked list.
#include<stdio.h>
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
}*head = NULL;
void createTree(int element)
{
    struct Node *new = (struct Node*) malloc(sizeof(struct Node));
    struct Node *temp = head;
    if(temp == NULL)
    {
        temp -> data = element;
        temp -> left = NULL;
        temp -> right = NULL;
    }
    // while(temp->)
    else if(temp->left == NULL)
    {
        temp = temp -> left;
        temp -> data = element;
        temp -> left = NULL;
        temp -> right = NULL;
    }
    else if(temp->right == NULL)
    {
        temp = temp -> right;
        temp -> data = element;
        temp -> left = NULL;
        temp -> right = NULL;
    }

}