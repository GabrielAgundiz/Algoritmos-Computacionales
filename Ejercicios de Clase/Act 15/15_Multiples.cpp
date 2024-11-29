#include<stdio.h>
int main(){
    int num1,num2;
    printf("Give me two numbers, I will tell you if they are multiples\n");
    scanf("%d",&num1);
    scanf("%d",&num2);
    if (num1%num2 == 0){
        printf("\nThe first is a multiple of the second\n\n");
    } 
    else{
        if (num2%num1 == 0)
        {
        }
        else{printf("They are not multiples");}
    }

    if (num2%num1 == 0){
        printf("\nThe second is a multiple of the first\n\n");
    }
    else{
        if (num1%num2 == 0){
        }
        else{printf("\nThey are not multiples\n\n");}
    }
}
