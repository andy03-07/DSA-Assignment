// Assignment NO 5
// Implement stacks by using array and linked list
// Perform operation like
// (push,pop,print,exit) 

// Program B-Linked List based

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data; 
    struct node* next;
};

struct node *top = NULL;

void push() {
    int x;
    printf("Enter data to push: ");
    scanf("%d", &x);

    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    if (newnode == NULL) {
        printf("Memory allocation failed\n");
        return;
    }
    
    newnode->data = x;
    newnode->next = top;
    top = newnode;
}

void display() {
    struct node *temp = top;
    if (temp == NULL) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements are: ");
        while (temp != NULL) {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}

void peek() {
    if (top == NULL) { 
        printf("Stack is empty\n");
    } else {
        printf("Top element is %d\n", top->data);
    }
}

void pop() {
    if (top == NULL) {
        printf("No elements to pop\n");
    } else {
        struct node* temp = top;
        printf("Popped element is %d\n", top->data);
        top = top->next;
        free(temp);
    }
}

int main() {
    int ch;
    do {
        printf("Enter choice (1 for push, 2 for pop, 3 for peek, 4 for display, 0 to exit): ");
        scanf("%d", &ch);
        switch (ch) {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: peek(); break;
            case 4: display(); break;
            case 0: printf("Exiting...\n"); break;
            default: printf("Invalid choice\n");
        }
    } while (ch != 0);
    
    while (top != NULL) {
        pop();
    }
}
