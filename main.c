#include "main.h"
#include <stdio.h>



int main()
{
	int len = 0, len1 = 0;

	len = printf("name%ch\n",'B');

	len1 = _printf("na%cmeh%s\n",'V',"is omar");

	printf("%d, %d", len1, len);

	return 0;
}

