#include "main.h"
/**
 * add_int_buffer - insert int buffer
 * @d: int
 * @buffer: buffer
 * @index: actual index
 */
int add_int_buffer(int d, char *buffer, int index)
{
	unsigned int num, sign = 0, vtemp, divider = 1, j = 0;

	if (d < 0)
	{
		sign = 1;
		num = d * -1;
		index = add_to_buffer('-', buffer, index);
	}
	if (sign == 0)
		num = d;
	vtemp = num;
	while (vtemp > 9)
	{
		vtemp /= 10;
		divider *= 10;
	}
	while (divider > 0)
	{
		index = add_to_buffer(((num / divider) % 10) + '0', buffer, index);
		divider /= 10;
		j++;
	}
	return (index);
}
