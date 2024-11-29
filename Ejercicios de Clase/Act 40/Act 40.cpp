#include<stdio.h>

int main(){

    int n;

    printf("\n\nDame un numero y te imprimo los submultiplos: ");
    scanf("%d",&n);

    for(int i=n-1;i>0;i--){
        if(n%i == 0){
            printf("\n%d",i);
        }
        
    }
    printf("\n\n");

}
