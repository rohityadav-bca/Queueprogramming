
#include <stdio.h>
#define SIZE 5

int main()
{
    int value[SIZE] = {10, 20, 30};
    int priority[SIZE] = {2, 1, 3};
    int n = 3, i, j, temp;

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (priority[i] > priority[j])
            {
                temp = priority[i];
                priority[i] = priority[j];
                priority[j] = temp;

                temp = value[i];
                value[i] = value[j];
                value[j] = temp;
            }
        }
    }

    printf("Deleted element: %d\n", value[0]);

    for (i = 0; i < n - 1; i++)
    {
        value[i] = value[i + 1];
        priority[i] = priority[i + 1];
    }
    n--;

    printf("Remaining elements:\n");
    for (i = 0; i < n; i++)
    {
        printf("Value: %d, Priority: %d\n",
               value[i], priority[i]);
    }

    return 0;
}
