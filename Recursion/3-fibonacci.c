#include <stdio.h>

int print_fibonacci(int n);

/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
	int n;
	printf("\nInput number of terms for the Series (<20): ");
	scanf("%d", &n);
	printf("The Series are : ");
	printf("1 ");
	print_fibonacci(n);
	printf("\n\n");
	return (0);
}

/**
 * print_fibonacci - prints the Fibonacci Series using recursion
 *
 * @n: the number
 *
 * Return: the numbers
 */
int print_fibonacci(int n)
{
	static int prvNum = 0;
	static int curNum = 1;
	static int nxtNum;

	if (n == 1)
	{
		return (0);
	}
	else if (n > 0)
	{
		nxtNum = prvNum + curNum;
		prvNum = curNum;
		curNum = nxtNum;

		printf("%d ", nxtNum);
		return (print_fibonacci(n - 1));
	}
}