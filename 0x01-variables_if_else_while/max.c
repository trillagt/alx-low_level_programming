#include <stdio.h>

/**
 * max - Maximum function
 * num1 - first entry
 * num2 - second entry
 * main - Entry point
 *
 * Return: Always 0 (Success(
 */
int max(int num1, int num2);

/*for the main functions*/
int main(void)
{
	/*declare variables*/
	int firstNo;
	int secondNo;
	int ret;

	/*take input*/
	printf("First = ");
	scanf("%d", &firstNo);
	printf("Second = ");
	scanf("%d", &secondNo);

	/*evaluate and print*/
	ret = max(firstNo, secondNo);
	printf("The biggest is = %d", ret);
}

/*the function called*/
int max(int num1, int num2)
{
	int result;

	if (num1 < num2)
	{
		result = num2;
	}
	else
	{
		result = num1;
	}

	return (result);
}
