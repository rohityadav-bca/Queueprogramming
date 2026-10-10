#include <stdio.h>
#define SIZE 5

int main()
{
    int queue[SIZE];
    int front = -1, rear = -1;
    int i;

    int a[] = {10, 20, 30, 40};

    for (i = 0; i < 4; i++)
    {
        if (front == -1)
            front = 0;

        rear = (rear + 1) % SIZE;
        queue[rear] = a[i];
    }

    printf("Deleted: %d\n", queue[front]);
    front = (front + 1) % SIZE;

    printf("Deleted: %d\n", queue[front]);
    front = (front + 1) % SIZE;

    rear = (rear + 1) % SIZE;
    queue[rear] = 50;

    rear = (rear + 1) % SIZE;
    queue[rear] = 60;

    printf("Circular Queue: ");
    i = front;

    while (1)
    {
        printf("%d ", queue[i]);

        if (i == rear)
            break;

        i = (i + 1) % SIZE;
    }

    printf("\n");
    return 0;
}
