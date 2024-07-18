#include "search_algos.h"
#include <stdio.h>

/**
 * print_array - Prints an array or subarray for debugging.
 * @array: The array to print.
 * @left: The starting index of the array or subarray.
 * @right: The ending index of the array or subarray.
 */
void print_array(int *array, size_t left, size_t right)
{
    size_t i;
    printf("Searching in array: ");
    for (i = left; i <= right; i++)
    {
        if (i < right)
            printf("%d, ", array[i]);
        else
            printf("%d\n", array[i]);
    }
}

/**
 * advanced_binary_recursive - Recursive function to perform binary search.
 * @array: The sorted array to search in.
 * @left: The left index of the current subarray.
 * @right: The right index of the current subarray.
 * @value: The value to search for.
 *
 * Return: The index of the first occurrence of 'value', or -1 if not found.
 */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
    size_t mid;
    if (left <= right)
    {
        mid = left + (right - left) / 2;
        print_array(array, left, right);

        if (array[mid] == value)
        {
            if (mid == left || array[mid - 1] != value)
                return mid;
            else
                return advanced_binary_recursive(array, left, mid, value);
        }
        else if (array[mid] > value)
            return advanced_binary_recursive(array, left, mid - 1, value);
        else
            return advanced_binary_recursive(array, mid + 1, right, value);
    }
    return -1;
}

/**
 * advanced_binary - Searches for a value in a sorted array of integers.
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 *         Otherwise, the index where the value is located.
 *
 * Description: Uses recursion to perform binary search and prints
 *              the array or subarray being searched after each change.
 */
int advanced_binary(int *array, size_t size, int value)
{
    if (array == NULL || size == 0)
        return -1;

    return advanced_binary_recursive(array, 0, size - 1, value);
}
