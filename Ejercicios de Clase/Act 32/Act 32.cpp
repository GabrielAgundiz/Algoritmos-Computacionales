#include<stdio.h>

int main(){
    int num,suma;
    float prom, cont, n;
    printf("\n\nA cuantos numeros les quieres hacer el promedio?");
    scanf("%f",&n);
    suma = 0;
    cont = 0;

    for(int i=1;i<=n;i++){
        printf("\nNumero: ");
        scanf("%d",&num);

        if(num%2 == 0){
            suma = suma + num;
            cont = cont + 1;
        }
    }
    prom = suma/cont;
    printf("\nEl promedio es: %f\n\n", prom);
}
