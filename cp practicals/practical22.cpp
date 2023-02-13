#include <stdio.h>
#define MAX_SIZE 100

int front = 0, rear = -1;
int queue[MAX_SIZE];

void enqueue(int *queue, int *rear, int item) {
    if (*rear == MAX_SIZE - 1) {
        printf("Queue is full.\n");
    } else {
        queue[++(*rear)] = item;
        printf("Item %d enqueued successfully.\n", item);
    }
}

void dequeue(int *queue, int *front, int *rear) {
    if (*front > *rear) {
        printf("Queue is empty.\n");
    } else {
        int item = queue[(*front)++];
        printf("Item %d dequeued successfully.\n", item);
    }
}

void display(int *queue, int front, int rear) {
    if (front > rear) {
        printf("Queue is empty.\n");
    } else {
        printf("The elements in the queue are:\n");
        for (int i = front; i <= rear; i++) {
            printf("%d\n", queue[i]);
        }
    }
}

int main() {
    int choice, item;
    while (1) {
        printf("\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter the item to be enqueued: ");
                scanf("%d", &item);
                enqueue(queue, &rear, item);
                break;
            case 2:
                dequeue(queue, &front, &rear);
                break;
            case 3:
                display(queue, front, rear);
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice.\n");
                break;
        }
    }    
    return 0;
}
