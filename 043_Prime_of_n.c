#include <stdio.h>
int main(){
    int i, Number, Maximum; 

    printf("Please Enter the upto which you want to print prime numbers : ");
    scanf("%d", &Maximum);
 
    printf("Prime Numbers upto %d are:\n", Maximum);
    printf("%d  %d ",1, 2);  
    for(Number = 1; Number <= Maximum; Number+=2){
        for (i = 2; i <= Number; i++){
            if(Number%i == 0)
                break;
        }
        if(i == Number){
            printf(" %d ", Number);
        }  
    }
    return 0;
}