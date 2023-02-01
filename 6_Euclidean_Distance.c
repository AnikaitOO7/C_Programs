#include<stdio.h>
#include<math.h>
int main(){
	int x1, x2, y1, y2;
	double dist;
	printf("Enter the value of points:\n");
	scanf("%d %d %d %d", &x1, &x2, &y1, &y2 );
	dist = sqrt((x2-x1)*(x2-x1)+(x2-x1)*(x2-x1));
	printf("Distance:%lf",dist); 
	return 0;
}