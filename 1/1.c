// WAP to implement Stack using array.

#include <stdio.h>
#include <stdlib.h>
#include "1.h"

int main() {

    int n; 
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];


    while(1) {
        printf("\n\n1. Push\n2. Pop\n3. Exit\n\nEnter your choice: ");
        int choice;
        scanf("%d", &choice);

        switch(choice) {
            case 1: push(arr, n);
                    break;
            case 2: pop(arr);
                    break;
            case 3: exit(0);
                    break;
            default: printf("\n\nInvalid choice.\n\n");
        }
    }

    return 0;
}