#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print alphabets
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alp[1]);
	}
	putchar('\n');
	return (0);
}

