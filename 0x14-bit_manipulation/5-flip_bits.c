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
/**
 * flip_bits - get the number of bits to flip to match two nmbers
 * @n: first number
 * @m: second number
 * Return: number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unisgned int bit_num = 0, bit1, bit2;
	unisgned int i, numbits = sizeof(unsigned long int) * 8;

	for (i = 0; i < numbits; ++i)
	{
		bit1 = get_bit(n, i);
		bit2 = get_bit(m, i);
		if (bit1 != bit2)
			bit_num++;
	}
	return (bit_num);
}
