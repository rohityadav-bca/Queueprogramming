
#include <stdio.h>
#define SIZE 5

int main()
{
    int deque[SIZE];
    int front = -1, rear = -1;
    int i;

    front = rear = 0;
    deque[front] = 10;

    deque[++rear] = 20;

    front = (front - 1 + SIZE) % SIZE;
    deque[front] = 30;

    printf("Deleted from Front: %d\n", deque[front]);
    front = (front + 1) % SIZE;

    printf("Deleted from Rear: %d\n", deque[rear]);
    rear = (rear - 1 + SIZE) % SIZE;

    printf("Remaining elements: ");
    i = front;

    while (1)
    {
        printf("%d ", deque[i]);

        if (i == rear)
            break;

        i = (i + 1) % SIZE;
    }

    printf("\n");
    return 0;
}
