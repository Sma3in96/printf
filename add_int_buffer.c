#include "main.h"



int add_int_buffer(int d ,char *buffer,int index)
{
	int sign, vtemp, i;

	vtemp = d;
	if (d < 0)
	{
		sign = 1;
		d = d * -1;
		index = add_to_buffer('-', buffer, index);
	}
	for (i = 1; d > 9; i *= 10)
		d = d / 10;
	while (vtemp > 0)
	{
		index = add_to_buffer(48 + (vtemp / i), buffer, index);
		vtemp = vtemp % i;
		i /= 10;
	}
	return (index + sign);
}
