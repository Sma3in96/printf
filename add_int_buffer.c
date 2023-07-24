#include "main.h"
/**
 * add_int_buffer - insert int buffer
 * @d: int
 * @buffer: buffer
 * @index: actual index
 */
int add_int_buffer(int d ,char *buffer,int index)
{
	unsigned int sign = 0, vtemp, i, j = 0;

	if (d < 0)
	{
		sign = 1;
		d = d * -1;
		index = add_to_buffer('-', buffer, index);
	}
	vtemp = d;
	for (i = 1; d > 9; i *= 10)
		d = d / 10;
	while (i > 0)
	{
		index = add_to_buffer(48 + ((vtemp / i) % 10), buffer, index);
		i /= 10;
		j++;
	}
	return (j + sign);
}
