#include "main.h"

/**
 * get_endianness - The program checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int p;
	char *b;

	p = 1;
	b = (char *)&p;
	return (*b);
}
