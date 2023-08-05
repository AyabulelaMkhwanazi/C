#include <stdio.h>

int natural_num(int n);

/**
 * main - entry point
 *
 * Description: Prints the first 50 natural numbers
 * using recursion
 *
 * Return: always 0
 */
int main(void)
{
	int n = 1;
	printf("The natural numbers are : ");
	natural_num(n);
	printf("\n");
	return (0);
}

/**
 * natural_num - prints the first 50 natural numbers using recursion
 *
 * @n: the number
 *
 * Return: the number
 */
int natural_num(int n)
{
	if (n <= 50)
	{
		printf("%d ", n);
		return (natural_num(n + 1));
	}
}
