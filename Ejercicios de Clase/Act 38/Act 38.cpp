#include<stdio.h>

int main(){

    int n, suma=0;


    printf("\n\nDame un numero y te dire si es un numero perfecto: ");
    scanf("%d",&n);

    for(int i=n-1;i>0;i--)
    {
        if(n%i == 0)
        {
            suma = suma + i;
        }
    }
    if(suma == n)
    {
        printf("\nEs un numero perfecto\n\n");
    }
    else
    {
        printf("\nNo es un numero perfecto\n\n");
    }
}