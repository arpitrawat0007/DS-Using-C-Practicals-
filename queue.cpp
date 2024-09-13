// Write a program in ‘C’ to create a queue containing ten elements and perform delete and insert operations using array.
#include <stdio.h>

#define MAX_SIZE 10

int queue[MAX_SIZE];
int front = -1, rear = -1;

// Function to check if the queue is empty
int isEmpty() {
    return (front == -1 && rear == -1);
}

// Function to check if the queue is full
int isFull() {
    return (rear == MAX_SIZE - 1);
}

// Function to insert an element into the queue (enqueue)
void enqueue(int value) {
    if (isFull()) {
        printf("Queue is full. Cannot enqueue.\n");
    } else {
        if (isEmpty()) {
            front = rear = 0;
        } else {
            rear++;
        }
        queue[rear] = value;
        printf("Enqueued: %d\n", value);
    }
}

// Function to delete an element from the queue (dequeue)
void dequeue() {
    if (isEmpty()) {
        printf("Queue is empty. Cannot dequeue.\n");
    } else {
        int deletedValue = queue[front];
        printf("Dequeued: %d\n", deletedValue);
        if (front == rear) {
            front = rear = -1; // Reset front and rear for an empty queue
        } else {
            front++;
        }
    }
}

// Function to display the elements in the queue
void display() {
    if (isEmpty()) {
        printf("Queue is empty.\n");
    } else {
        printf("Queue elements: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main() {
    // Inserting elements into the queue
    enqueue(10);
    enqueue(20);
    enqueue(30);

    // Displaying the initial queue
    display();

    // Deleting an element from the queue
    dequeue();

    // Displaying the updated queue
    display();

    return 0;
}