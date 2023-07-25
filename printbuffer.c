#include "main.h"


int printbuffer(char *buffer, int index)
{
	return (write(1, buffer, index));
}
