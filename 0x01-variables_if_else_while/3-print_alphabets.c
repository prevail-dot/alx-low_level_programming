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
	int x, upper;

	x = getchar();
	upper = toupper(x);

	for (x = 'a'; x <= 'z', 'Z'; x++)
	{
		putchar(x);
	}
	{
		putchar(upper(x));
	}
	{
		putchar('\n');
	}

	return (0);
}
