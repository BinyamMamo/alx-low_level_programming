#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int jump_search(int *array, int size, int value)
{
    int i = 0;
    int j = (int)sqrt((double)size);

    printf("hi");
    for (; i < size; i += j)
    {
        if (array[i] == value)
        {
            printf("Hurray!!!\n");
            return (i);
        }
        else if (value < array[i])
        {
            while (value <= array[i])
            {
                if (array[i] == value)
                {
                    printf("Hurray!!!\n");
                    return (i);
                }
                i--;
            }

            return (-1);
        }
    }
}

int main(void)
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    printf("hello world");

    printf("The index of the value is: %d\n", jump_search(array, 12, 5));
}