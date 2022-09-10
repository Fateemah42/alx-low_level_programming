#include <stdio.h>

/**
 * main - Print the alphabet in lowercase, and uppercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	int alphabet, ALPHABET;

	alphabet = 'a';
	ALPHABET = 'A';
	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	while (ALPHABET <= 'Z')
	{
		putchar(ALPHABET);
		ALPHABET++;
	}
	putchar('\n');
	return (0).
}
