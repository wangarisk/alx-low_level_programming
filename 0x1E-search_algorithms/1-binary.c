#include <stdio.h>

int binary_search(int *array, size_t size, int value)
{
        size_t i;
        if (array == NULL)
        {
                return -1;

        }
        for (i=0; i < size; i++)
        {
                printf("Searched in array:[%d]\n", array[i]);
                if (array[i] == value)

                        return i;
        }
        return -1;

}
