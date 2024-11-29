#include<stdio.h>

int main(){
    int n, num=0, p_num=0,mayor;
    printf("\n\nDame la lista de los numeros de los que quieres saber el mayor: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        printf("Numero: ");
        scanf("%d",&num);
        if(num > mayor){
            mayor = num;
        }   
    }
    printf("\nEl mayor de los numeros es: %d\n\n",mayor);
}
