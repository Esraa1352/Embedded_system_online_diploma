#include<stdio.h>

int main()
{
	float i, j;
	char operator;

	printf("Enter operator (+, -, *, /): ");
	fflush(stdout);
	scanf(" %c", &operator);

	printf("Enter two operands: ");
	fflush(stdout);
	scanf("%f %f", &i, &j);

	switch(operator)
	{
	case '+':
		printf("Sum: %.1f\n", i + j);
		break;

	case '-':
		printf("Difference: %.1f\n", i - j);
		break;

	case '*':
		printf("Multiplication: %.1f\n", i * j);
		break;

	case '/':
		if (j != 0)
			printf("Division: %.1f\n", i / j);
		else
			printf("Error: Division by zero is not allowed.\n");
		break;

	default:
		printf("Not a valid operator.\n");
	}

	return 0;
}
