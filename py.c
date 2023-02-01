#include <stdio.h>
int main(){
	int x,y,z;
	printf("Enter the no. of rows to be printed:");
	scanf("%d",&x);

	for(y = 1; y <= x; y++)
	{
		for(z = 1; z <= y; z++)
		{
		printf("*");	
		}
		printf("\n");
	}
	return 0;
}