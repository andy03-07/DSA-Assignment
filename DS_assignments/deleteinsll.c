// Assignment NO. 4 
// Linked List 
// Implement a single linked list and perform operation on it like 
// Create, insert, delete and traversal 
// Program C
// Delete an element in a Linked list 

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

void deleteatposition(struct node **x, int key) {
    struct node *curr = *x;
    struct node *prev = NULL;

    if (*x == NULL) {
        printf("List is already empty.\n");
        return;
    }

    if (key == 1) {
        *x = curr->next;
        free(curr);
        curr = NULL;
        return;
    }

    while (key > 1 && curr != NULL) {
        prev = curr;
        curr = curr->next;
        key--;
    }

    if (curr == NULL) {
        printf("Position out of bounds.\n");
        return;
    }

    prev->next = curr->next;
    free(curr);
    curr = NULL;
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

    printf("Linked list before deletion:\n");
    struct node *ptr = x;
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");

    int key;
    printf("Enter the position of the element you want to delete: ");
    scanf("%d", &key);

    deleteatposition(&x, key);

    printf("Updated linked list:\n");
    struct node *temp = x;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");

    return 0;
}

