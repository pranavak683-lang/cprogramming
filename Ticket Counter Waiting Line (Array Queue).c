#include <stdio.h>
#define SIZE 5

int queue[SIZE];
int front = -1, rear = -1;

// Add person to queue
void enqueue(int token) {
    if (rear == SIZE - 1) {
        printf("Queue is Full! No more people can enter.\n");
    } else {
        if (front == -1)
            front = 0;
        rear++;
        queue[rear] = token;
        printf("Person with token %d joined the line.\n", token);
    }
}

// Remove person from queue
void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue is Empty! No one waiting.\n");
    } else {
        printf("Person with token %d got the ticket.\n", queue[front]);
        front++;
    }
}

// Display queue
void display() {
    if (front == -1 || front > rear) {
        printf("No people in waiting line.\n");
    } else {
        printf("Waiting Line: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main() {
    enqueue(101);
    enqueue(102);
    enqueue(103);

    display();

    dequeue();
    display();

    return 0;
}
