#include "main.h"

/**
 * set_bit - The program sets the value of a bit to 1 at a given index.
 * @n: The number to set
 * @index: The index at which to set bit
 * Return: 1 if success, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int setbit;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	if
	{
		setbit = 1 << index;
		*n = *n | setbit;
	}
	return (1);
}
