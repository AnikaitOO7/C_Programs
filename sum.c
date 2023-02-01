#include <stdio.h>
int main(){
	int num1, num2, sum;
	printf("Enter the value:\n");
	scanf("%d",&num1);
    printf("Enter the value:\n");
	scanf("%d",&num2);

	sum = num1 + num2;
	printf("sum = %d + %d = %d", num1, num2, sum);
	return 0;
}
