#include<stdio.h>
int main()
{
int mth_num;
printf("Enter the month number : ");

scanf("%d",&mth_num);
switch(mth_num){
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
	printf("The month has 31 days. "); break;
	
	case 4:
	case 9:
	case 11:
	printf("The month has 30 days. "); break;
	
	case 2:
	printf("The month has 28/29 days."); break;
	
	default: 
	printf("Wrong month entered.");
	return 0;
	
}
}