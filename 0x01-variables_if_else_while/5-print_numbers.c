#include  <stdio.h>

/**
 * main - Entry point
 *
 * Description: Numbers;
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		printf("%d", num);
		num++;

		if (num == 9)
		printf('\n');
	}
	return (0);
}
