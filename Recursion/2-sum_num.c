#include <stdio.h>

int sum_num(int n);

/**
 * main - entry point
 *
 * Rerturn: always 0
 */
int main(void)
{
	int n;

	printf("\nInput the last number of the range starting from 1 : ");
	scanf("%d", &n);
	sum_num(n);
	printf("The sum of numbers from 1 to %d :\n%d\n\n", n, sum_num(n));
	return (0);
}

/**
 * sum_num - Calculates the sum of numbers from 1 to n using
 * recursion
 *
 * Return: always 0
 */
int sum_num(int n)
{
	if (n == 1)
	{
		return (1);
	}
	else
	{
		return (n + sum_num(n - 1));
	}
}
