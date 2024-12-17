// Assignment NO 8 C
// Implement a Circular queue using Stack
// use menu driven program
// (1.enqueue, 2.dequeue, 3.print, 4.exit)

// Program

#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int CircularQueue[SIZE];
int f,r;
f=r=-1;

int isFull() {
    return ((r + 1) % SIZE == f);
}

int isEmpty() {
    return (f == -1);
}

void enqueue(int value) {
    if (isFull()) {
        printf("Queue is full. Cannot enqueue.\n");
        return;
    }
    if (isEmpty()) 
        f = 0;
    r = (r + 1) % SIZE;
    CircularQueue[r] = value;
    printf("%d enqueued to the queue\n", value);
}

void dequeue() {
    if (isEmpty()) {
        printf("Queue is empty. Cannot dequeue.\n");
        return;
    }
    int removedValue = CircularQueue[f];
    if (f == r)
        f = r = -1;
    else
        f = (f + 1) % SIZE;
    printf("%d dequeued from the queue\n", removedValue);
}

void printQueue() {
    if (isEmpty()) {
        printf("Queue is empty.\n");
        return;
    }
    printf("Queue: ");
    int i = f;
    while (1) {
        printf("%d ", CircularQueue[i]);
        if (i == r) break;
        i = (i + 1) % SIZE;
    }
    printf("\n");
}

int main() {
    int choice, value;

    while (1) {
        printf("Menu:\n");
        printf("1. Add (Enqueue) ");
        printf("2. Delete (Dequeue) ");
        printf("3. Print ");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to enqueue: ");
                scanf("%d", &value);
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                printQueue();
                break;
            case 4:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}


