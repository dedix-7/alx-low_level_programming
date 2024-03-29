#include "main.h"
/**
 * get_bit - get the bit at a given index
 * @n: number given to find its indexed bit
 * @index: index of the bit to find starting from zero on the right
 * Return: value of the bit or -1 on error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int siz = 0x01, shift_num, ref = sizeof(unsigned long int) * 8;
	int ret;

	if (index >= ref)
		return (-1);
	shift_num = n >> index;
	ret = shift_num & siz;
	return (ret);
}
