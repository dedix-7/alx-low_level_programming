#include "main.h"
/**
 * clear_bit - set the bit at a given index to 0
 * @n: address of number given to find its indexed bit
 * @index: index of the bit to find starting from zero on the right
 * Return: value of the bit or -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int siz = 0x01;
	unsigned long int shift_num, ref = sizeof(unsigned long int) * 8;
	unsigned long int num = *n;

	if ((index + 1) >= ref)
		return (-1);
	shift_num = siz << (index);
	shift_num = ~shift_num;
	*n = num &= shift_num;
	return (1);
}
