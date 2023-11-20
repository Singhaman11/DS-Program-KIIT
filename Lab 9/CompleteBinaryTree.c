//Create a complete binary tree with the following as node values: 12, 56, 64, 09, 16, 20, 38, 34, 21, 26 using the linked list.
#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
}*parent = NULL;
void inorder(struct Node *root)
{
    printf("Called");
   if(root == NULL)
        return;
    inorder(root->left);
    printf("%d, ", root->data);
    inorder(root->right);
}
void main()
{
    parent = (struct Node*) malloc(sizeof(struct Node));
    parent->left = (struct Node*) malloc(sizeof(struct Node));
    parent->right = (struct Node*) malloc(sizeof(struct Node));
    parent->left->left = (struct Node*) malloc(sizeof(struct Node));
    parent->left->right = (struct Node*) malloc(sizeof(struct Node));
    parent->right->left = (struct Node*) malloc(sizeof(struct Node));
    parent->right->right = (struct Node*) malloc(sizeof(struct Node));
    parent->left->left->left = (struct Node*) malloc(sizeof(struct Node));
    parent->left->left->right = (struct Node*) malloc(sizeof(struct Node));
    parent->left->right->left = (struct Node*) malloc(sizeof(struct Node));
    parent -> data = 12;
    parent -> left -> data = 56;
    parent -> right -> data = 64;
    parent -> left -> left -> data = 9;
    parent -> left -> right -> data = 16;
    parent -> right -> left -> data = 20;
    parent -> right -> right -> data = 38;
    parent -> left -> left -> left -> data = 34;
    parent -> left -> left -> right -> data = 21;
    parent -> left -> right -> left -> data = 26;
    inorder(parent);
}