#include <stdio.h>

int print_elements(int arr[], int n);

/**
 * main - entry point
 *
 * Return: always 0.
 */
int main(void)
{
	int arr[100];
	int n;
	int i;
	printf("\nInput number of elements to be stored in the array: ");
	scanf("%d", &n);
	printf("Input %d elements in the array: ", n);
	for (i = 0; i < n; i++)
	{
		printf("\nelement[%d] : ", i);
		scanf("%d", &arr[i]);
	}
	printf("\nThe elements in the array are: ");
	print_elements(arr, n);
	printf("\n\n");
	return (0);
}

/**
 * print_elements - prints the array elements using recursion
 *
 * Return: elements
 */
int print_elements(int arr[], int n)
{
	if (n <= 0)
	{
		return (0);
	}
	else
	{
		printf("%d, ", arr[0]);
		return (print_elements(arr + 1, n - 1));
	}
}
