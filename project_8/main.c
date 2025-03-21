#include <stdio.h>

// Write a program to print the sum of natural numbers in a range from user

int main() {
	// declarations
	int lower, upper, sum = 0, i;

	// input
	printf("Lower limit: ");
	scanf("%d", &lower);
	printf("Upper limit: ");
	scanf("%d", &upper);

	// calculations
	i = lower;
	while (i <= upper) {
		sum += i;
		i++;
	}

	// output
	printf("\nSum = %d", sum);

	// exit with code 0
	return 0;
}
