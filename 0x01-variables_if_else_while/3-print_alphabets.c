#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: alphABET;
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int x;

	for (x = 'A'; x <= 'Z'; x++)
	{
		putchar(x);
	}
	{
		int lower_x = tolower(x);

		putchar(lower_x);
	}

	putchar('\n');

	return (0);
}
