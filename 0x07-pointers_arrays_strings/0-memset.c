#include "main.h"
/**
 * _memset - a function that fills the memory with a constant byte
 * @b: the desired value
 * @s: starting address of memory to be filled
 * @n: number of bytes to be changed
 *
 * Return: changed arary with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
	}
	return (s);
}
