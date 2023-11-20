#include <stdio.h>

int top = -1;


void pop(int arr[]) {
  if(top == -1) {
    printf("\n\nStack Underflow.\n\n");
    return;
  }
  else {
    printf("\n\nThe popped element is %d.\n\n", arr[top]);
    top--;
  }
}

void push(int arr[], int n) {
    if (top == n - 1) {
    printf("\n\nStack Overflow.\n\n");
    return;
  }
  else {
    top++;
    printf("\n\nEnter the element: ");
    scanf("%d", &arr[top]);
  }
}

void peek(int arr[]) {
  if(top == -1) {
    printf("\n\nStack Underflow.\n\n");
    return;
  }
  else {
    printf("\n\nThe top element is %d.\n\n", arr[top]);
  }
}