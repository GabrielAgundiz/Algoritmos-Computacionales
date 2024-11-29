#include<stdio.h>

int main(){

    int n, num, num1, num2, num3, num4, ap1, ap2;

    do{
        printf("Dame la cantidad de numeros que quieres en la serie (minimo 4): ");
        scanf("%d",&n);
    }while(n<4);

    ap2 = 1;
    num = 3;
    num1 = 3;
    num2 = 0;
    num3 = 0;
    num4 = 0;

    printf("%d, ", num);

    for(int i = 2; i<=n ; i++){
        if(i%3 != 0){
            if(ap2 == 0){
                num = num + 6;
                num1 = num;
                printf("%d, ", num);
                ap2 = 1;
            }
            else{
                num = num + 3;
                num2 = num;
                printf("%d, ",num);
                ap2 = 0;
            }
        }
        else{
            num4 = num1 + num2 + num3;
            num3 = num4;
            
            printf("%d, ", num4);
        }
    }
}
