# include <stdio.h>
 
int main(){
   double x, y, div, temp;
   printf("Enter the value: ");
   scanf("%lf %lf", &x, &y);
   printf("Before swaping value x=%lf, y=%lf\n",x,y);

   temp=x;
   x=y;
   y=temp;
   printf("After swaping value x=%lf, y=%lf\n",x,y);

   div = x / y;
   printf("div = %lf / %lf = %lf", x, y, div);
   return 0;
}
