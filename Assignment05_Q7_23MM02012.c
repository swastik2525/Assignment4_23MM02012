#include <stdio.h>
int main()
{
    int arr[10], temp;

    printf("Enter 10 integers of the array"
    );
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 10 - 1; i++)
    {
        for (int j = 0; j < 10 - i - 1; j++)
        {

            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted array:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}