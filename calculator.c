//Program to create a simple calculator
#include <stdio.h>

int main()
{
	char operator;
	double n1, n2;
	printf("Enter an operator (+, -, *, /): ");
	scanf("%c", &operator);
	printf("Enter first operand:");
	scanf("%lf",&n1);
	printf("Enter second operand:");
	scanf("%lf",&n2);
	switch(operator)
	{
		case '+':
			printf("%.1lf + %.1lf = %.1lf", n1 , n2 , n1+n2);
					
		case '-':
			printf("%.1lf + %.1lf = %.1lf", n1 , n2 , n1-n2);
			break;
		case '*':
			printf("%.1lf + %.1lf = %.1lf", n1 , n2 , n1*n2);
			break;
		case '/':
			printf("%.1lf + %.1lf = %.1lf", n1 , n2 , n1/n2);
			break;
		default:
			printf("Error operator is not correct");
	}
	return 0;
}