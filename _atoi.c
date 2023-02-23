#include "source.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 * Return: 0 if no number in string, converted number otherwise
 */
int _atoi(char *s)
{
	int i, sign = 1, flag = 0, output;
	unsigned int result = 0;

	for (i = 0; s[i] != '\0' && flag != 2; i++)
	{
		if (s[i] == '-')
			sign *= -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			flag = 1;
			result *= 10;
			result += (s[i] - '0');
		}
		else
			if (flag == 1)
				flag = 2;
	}
	if (sign == -1)
		output = -result;
	else
		output = result;
	return (output);
}
