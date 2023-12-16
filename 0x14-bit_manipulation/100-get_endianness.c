#include "main.h"
/**
 * get_endianness - find the archtecture of a machine
 * If it is little or bifg endian
 * Return: 0 for big endian or 1 for little endian
 */
int get_endianness(void)
{
	int x = 0x01;
	int *b = &x;

	if ((char)b[0])
		return (1);
	return (0);
}
