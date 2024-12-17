// Assignment NO 8 A
// Implement a queue using stack 
// use menu driven program
// (1.enqueue, 2.dequeue, 3.print, 4.exit)

// Program


#include <stdio.h>
#include <stdlib.h>

#define SIZE 5 

int queue[SIZE], front = -1, rear = -1;

void enqueue() {
    int value;
    if (rear == SIZE - 1) {
        printf("\nQueue is Full!\n");
    } else {
        printf("Enter the value to be added: ");
        scanf("%d", &value);
        if (front == -1) front = 0;
        rear++;
        queue[rear] = value;
        printf("%d enqueued to queue\n", value);
    }
}
void dequeue() {
    if (front == -1 || front > rear) {
        printf("\nQueue is Empty!\n");
    } else {
        printf("%d dequeued from queue\n", queue[front]);
        front++;
        if (front > rear) {
            front = rear = -1;
        }
    }
}

void printQueue() {
    if (front == -1 || front > rear) {
        printf("\nQueue is Empty!\n");
    } else {
        printf("\nQueue elements are:\n");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice;
    
    do {
        printf("\nQueue Menu:\n");
        printf("1. Enqueue ");
        printf("2. Dequeue ");
        printf("3. Print Queue ");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                printQueue();
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice, please try again!\n");
        }
    } while (choice != 4);

    return 0;
}
