#include <stdio.h>

// Write a program to subtract two numbers from the user and print the output

int main()
{
	// declarations
	int num1, num2, diff;

	// input
	printf("Calculate a - b:");
	printf("\na = ");
	scanf("%d", &num1);
	printf("b = ");
	scanf("%d", &num2);

	// calculations
	diff = num1 - num2;

	// output
	printf("\nDifference (a - b) = %d", diff);

	// exit with code 0
	return 0;
}
