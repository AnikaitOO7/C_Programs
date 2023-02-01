//Author: Anikait Singh
//Creation Date: 28 Jan 2021
//Purpose: 
#include<stdio.h>	//
int main(){	//
	int lower, upper, i, n;	//
	printf("Enter the lower value:");	//
	scanf("%d",&lower);
	printf("Enter the upper value:");	//
	scanf("%d",&upper);
	printf("Enter the value:")	//
	scanf("%d",&i);
	for(n=lower; n<=upper;n++)	//
	{
		if(n%i==0)
			printf("%d\n",n);	//
	}
	return 0;
}	//