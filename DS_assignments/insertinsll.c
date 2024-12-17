// Assignment NO. 4 
// Linked List 
// Implement a single linked list and perform operation on it like 
// Create, insert, delete and traversal 
// Program B 
// Insert an element in a Linked list 

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

void insertatposition(struct node *x, int position, int newdata) {
    struct node *temp = x;
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = newdata;
    newnode->next = NULL;
    
    position--;

    while (position > 1 && temp != NULL) {
        temp = temp->next;
        position--;
    }

    if (temp == NULL) {
        printf("Position out of bounds.\n");
        return;
    }

    newnode->next = temp->next;
    temp->next = newnode;
}

int main() {
    struct node *x, *y, *z, *w;
    x = (struct node *)malloc(sizeof(struct node));
    y = (struct node *)malloc(sizeof(struct node));
    z = (struct node *)malloc(sizeof(struct node));
    w = (struct node *)malloc(sizeof(struct node));

    x->data = 5;
    x->next = y;
    y->data = 10;
    y->next = z;
    z->data = 25;
    z->next = w;
    w->data = 30;
    w->next = NULL;

    struct node *temp = x;
    printf("Linked list before insertion:\n");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");

    int newdata = 20, position = 3;
    insertatposition(x, position, newdata);

    temp = x;
    printf("Linked list after insertion:\n");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");

    return 0;
}
