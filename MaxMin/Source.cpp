#include <stdio.h>
int ar[1000];
int i, max, min, size;
int main()
{
    printf("Enter size of the array: ");
    scanf_s("%d", &size);

    printf("Enter number in the array: ");
    for (i = 0; i < size; i++)
    {
        scanf_s("%d", &ar[i]);
    }

    max = ar[0];
    min = ar[0];

    for (i = 1; i < size; i++)
    {
        if (ar[i] > max)
        {
            max = ar[i];
        }

        if (ar[i] < min)
        {
            min = ar[i];
        }
    }

    printf("Maximum number = %d\n", max);
    printf("Minimum number = %d", min);

    return 0;
}