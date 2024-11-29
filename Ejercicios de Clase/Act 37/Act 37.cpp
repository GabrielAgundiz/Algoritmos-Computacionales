#include<stdio.h>

int main(){

    int n;
    printf("\n\nDame un numero y te dire si es primo o no: ");
    scanf("%d",&n);

    if(n ==2 || n == 3 || n == 5){
        printf("\n%d es un numero primo\n\n",n);
    }
    
    else{
        if (n%2 == 0 || n%3 == 0 || n%5 == 0){
        printf("\n%d no es un numero primo\n\n",n);
        }
        else{
        printf("\n%d es un numero primo\n\n",n);
        }
    }
}
