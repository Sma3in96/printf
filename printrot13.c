#include "main.h"
/**
 * printrot13 - print rot 13
 * @s: string
 * @buffer: buffer
 * @index: int
 * Return: int
 */
int printrot13(char *s, char *buffer, int index)
{
	int i = 0, j =0;
	char alphab[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (s[i])
	{
		for (j = 0; j < 52, j++)
		{
			if (alphab[j] == s[i])
			{
				index = add_to_buffer(rot[j], buffer, index);
				break;
			}
		}
		i++;
	}
	return (index);
}
