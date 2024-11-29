#include<stdio.h>

int main(){

    int num;
    printf("\n\n Dame un numero entre 1 y 10, para regresarte el numero romano\n");
    scanf("%d",&num);

    switch (num){
    case 1:
        printf("\nI\n\n");
        break;
    case 2:
        printf("\nII\n\n");
        break;
    case 3:
        printf("\nIII\n\n");
        break;
    case 4:
        printf("\nIV\n\n");
        break;
    case 5:
        printf("\nV\n\n");
        break;
    case 6:
        printf("\nVI\n\n");
        break;
    case 7:
        printf("\nVII\n\n");
        break;
    case 8:
        printf("\nVIII\n\n");
        break;
    case 9:
        printf("\nIX\n\n");
        break;
    case 10:
        printf("\nX\n\n");
        break;
    
    default:
        printf("El numero no esta en el rango");
        break;
    }

return 0;
}
