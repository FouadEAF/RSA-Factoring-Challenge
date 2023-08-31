#include "factor.h"

/**
 * factorisation - The function factorisation a number.
 * @buffer: pointer to the address of the number.
 * Return: integre.
 */
int factorisation(char *buffer)
{
    unsigned long long int buf, i;

	buf = strtoull(buffer, NULL, 10);

	for (i = 2; i < buf; i++)
	{
		if (buf % i == 0)
		{
			printf("%llu=%llu*%llu\n", buf, buf / i, i);
			break;
		}
	}

	return (0);
}
