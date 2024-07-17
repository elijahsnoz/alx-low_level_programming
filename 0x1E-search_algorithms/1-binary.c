#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of
 * integers using the Binary search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of value in array or -1 if value is not found or array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
    size_t left = 0;
    size_t right = size - 1;
    size_t mid, i;

    if (array == NULL)
        return (-1);

    while (left <= right)
    {
        printf("Searching in array: ");
        for (i = left; i <= right; i++)
        {
            printf("%d", array[i]);
            if (i < right)
                printf(", ");
        }
        printf("\n");

        mid = left + (right - left) / 2;

        if (array[mid] == value)
            return (int)mid;
        if (array[mid] < value)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return (-1);
}
