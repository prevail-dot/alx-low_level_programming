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
	int x;

	for (x = 'a'; x <= 'z'; (x != 'e'); (x != 'q'); x++)
	{
		putchar(x);
	}
	putchar('\n');

	return (0);
}
