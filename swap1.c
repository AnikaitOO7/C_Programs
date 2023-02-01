# include <stdio.h>
int swap(int x,int y){
    int div;
    div = x / y;
}
 
int main(){
   int x, y, div;
   x = 100;
   y = 2;
   printf("x=%d, y=%d\n",x,y);
   swap(x,y); 
   printf("%d / %d = %d",x,y,div);
   return 0;
}
