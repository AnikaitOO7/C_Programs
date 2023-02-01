#include <stdio.h>

int main()
{
	int a,b,result;
	printf("Enter value of a\n");
	scanf("%d",&a);
	printf("Enter value of b\n");
	scanf("%d",&b);

	result = a * b;
	printf("%d * %d = %d",a,b,result);

	return 0;
}