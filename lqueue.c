
#include <stdio.h>
#define SIZE 5

int main()
{
    int queue[SIZE];
    int front = -1, rear = -1;
    int i;

    queue[++rear] = 10;
    front = 0;
    queue[++rear] = 20;
    queue[++rear] = 30;

    printf("Deleted: %d\n", queue[front++]);
    printf("Deleted: %d\n", queue[front++]);

    queue[++rear] = 40;

    printf("Remaining elements: ");
    for (i = front; i <= rear; i++)
    {
        printf("%d ", queue[i]);
    }

    printf("\n");
    return 0;
}
