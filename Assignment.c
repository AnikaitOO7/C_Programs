//Author: Anikait Singh
//creation date: 18 Feb 2021
//Purpose: Program which demonstrates addition of two matrices.  
#include<stdio.h>	//Pre processor directive to include standard input and output function header file.
int main () //Main function defination.
{	//Start of main function body.
	int A[3][3], B[3][3], C[3][3];	//Declaration of arrays
	int i, j;	//Declaration of integer variable. 
	printf("Enter 9 number for first Matrix\n");	//printf function call for entring 9 number for first matrix.
	for(i=0; i<=2; i++ )	//for loop function call by value of variable i.
		for(j=0; j<=2; j++)	//for loop function call by value of variable j.
			scanf("%d",&A[i][j]);	//scanf function call by refrence.
	printf("Enter 9 number for second Matrix\n");	//printf function call for entring 9 number for second matrix.
	for(i=0; i<=2; i++ )
		for(j=0; j<=2; j++)
			scanf("%d",&B[i][j]);
	printf("Sum of Matrix is\n");	//printf function call for sum of matrix.
	for(i=0; i<=2; i++)	//for loop function call by value of variable i.
	{
		for(j=0; j<=2; j++)	//Nested for loop function call by value of variable j.
		{
			C[i][j] = A[i][j] + B[i][j];	//Statment for sum of matrices.  
			printf("%d ",C[i][j]); //printf function call by value.
		}
		printf("\n");	
	}
	return 0;	//return statment.			

}	//End of main function body.
   

   
