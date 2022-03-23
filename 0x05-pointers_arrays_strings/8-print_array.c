#include "main.h"

/**
 * print_array - prints n elements of an array of integers, 
 * followed by a new line.
 *
 * Return: void.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i < (n-1))
		{
			printf("%d, ", *(a + i));
		} else
		{
			printf("%d"\n, *(a + i));
		}
	}
}