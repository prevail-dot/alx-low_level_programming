#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: When I was having that alphabet soup;
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char x;

	while (x <= 'z')
	{

	if ((x != 'e') && (x != 'q'))
	{
		putchar(x);
	}
	x++;
	}
	putchar('\n');

	return (0);
}
