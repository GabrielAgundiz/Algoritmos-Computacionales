#include<stdio.h>

int main(){  
    int n,res;
    printf("Dame la tabla de multiplicacion que quieres: ");
    scanf("%d",&n);

    for(int i=1;i<=10;i++){
        res = n * i;
        printf("\n%d x %d = %d",n,i,res);
    }
printf("\n\n");
}
