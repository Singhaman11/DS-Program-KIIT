// create a complete binary tree with the following node values 12, 56, 64, 09, 16, 20, 38, 34, 21, 26 using linked list


#include <stdlib.h>
#include <stdio.h>


struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node* parent = NULL;

void traverseInorder(struct node* root) {
    if (root == NULL) {
        return;
    }
    else {
        traverseInorder(root->left);
        printf("%d ", root->data);
        traverseInorder(root->right);
    }
}

void traversePreorder(struct node* root) {
    if (root == NULL) {
        return;
    }
    else {
        printf("%d ", root->data);
        traversePreorder(root->left);
        traversePreorder(root->right);
    }
}

void traversePostorder(struct node* root) {
    if (root == NULL) {
        return;
    }
    else {
        traversePostorder(root->left);
        traversePostorder(root->right);
        printf("%d ", root->data);
    }
}

int main(){

    parent = (struct node*)malloc(sizeof(struct node));
    parent->data = 12;
    parent->left = (struct node*)malloc(sizeof(struct node));
    parent->right = (struct node*)malloc(sizeof(struct node));
    parent->left->data = 56;
    parent->right->data = 64;
    parent->left->left = (struct node*)malloc(sizeof(struct node));
    parent->left->right = (struct node*)malloc(sizeof(struct node));
    parent->left->left->data = 9;
    parent->left->right->data = 16;
    parent->right->left = (struct node*)malloc(sizeof(struct node));
    parent->right->right = (struct node*)malloc(sizeof(struct node));
    parent->right->left->data = 20;
    parent->right->right->data = 38;
    parent->left->left->left = (struct node*)malloc(sizeof(struct node));
    parent->left->left->right = (struct node*)malloc(sizeof(struct node));
    parent->left->left->left->data = 34;
    parent->left->left->right->data = 21;
    parent->left->right->left = (struct node*)malloc(sizeof(struct node));
    parent->left->right->left->data = 26;

    traverseInorder(parent);
    printf("\n");
    traversePreorder(parent);
    printf("\n");
    traversePostorder(parent);

}