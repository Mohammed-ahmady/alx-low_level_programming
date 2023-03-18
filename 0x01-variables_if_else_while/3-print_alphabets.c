#include <stdio.h>

/*
 *  main - Entry point
 *
 *  Description:  print the alphabet in lowercase, and then in uppercase
 *
 *  Return: Always 0 (Success)
 */

int main(void)
{
	char u = 'a';
	char l = 'A';

	for (u = 'a'; u <= 'z'; u++)
		putchar(u);
	for (l = 'A'; l <= 'Z'; l++)
		putchar(l);
	putchar('\n')
	return (0);
}
