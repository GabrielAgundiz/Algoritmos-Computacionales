#include<stdio.h>

int main(){
    int num1,num2,num3,sum;

    printf("\n\nGive me the sides of the triangle\n");
    printf("\nSide 1: "); scanf("%d",&num1);
    printf("\nSide 2: "); scanf("%d",&num2);
    printf("\nSide 3: "); scanf("%d",&num3);

    if (num1 == num2 and num2 == num3){
        printf("\nYou can make a triangle with that\n\n");
    }

    if(num1 > num2){
        if(num1 > num3){
                printf("%d, %d, %d\n\n",num1,num2,num3);
                sum = num2 + num3;
                if ( sum >= num1 ){
                    printf("\nYou can make a triangle with that\n\n");
                }
                else{
                    printf("\nYou can't make a triangle with that\n\n");
                }
        }
    }

    if(num2 > num3){
        if(num2 > num1){
                printf("%d, %d, %d\n\n",num2,num3,num1);
                sum = num1 + num3;
                if ( sum >= num2 ){
                    printf("\nYou can make a triangle with that\n\n");
                }
                else{
                    printf("\nYou can't make a triangle with that\n\n");
                }
        }
    }

    if(num3 > num1){
        if(num3 > num2){
                printf("%d, %d, %d\n\n",num3,num1,num2);

                sum = num1 + num2;
                if ( sum >= num3 ){
                    printf("\nYou can make a triangle with that\n\n");
                }
                else{
                    printf("\nYou can't make a triangle with that\n\n");
                }
        }
    }
}
