#include <stdio.h>

// Write a program to find the max and min of two numbers from user

int main() {
	// declarations
	int num1, num2, max, min;

	// input
	printf("Enter first number: ");
	scanf("%d", &num1);
	printf("Enter second number: ");
	scanf("%d", &num2);

	// calculations
	min = num1;
	max = num1;
	if (num1 > num2) {
		max = num1;
		min = num2;
	}
	else if (num2 > num1) {
		max = num2;
		min = num1;
	}

	// output
	printf("\nMax = %d", max);
	printf("\nMin = %d", min);

	// exit with code 0
	return 0;
}
