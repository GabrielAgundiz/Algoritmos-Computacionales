#include<stdio.h>

int main(){

    int mes;

    printf("\n\n Dame el numero de un mes, para devolverte que mes es ese\n");
    scanf("%d",&mes);

    switch (mes)
    {
    case 1:
        printf("\nEnero\n");
        break;
    case 2:
        printf("\nFebrero\n");
        break;
    case 3:
        printf("\nMarzo\n");
        break;
    case 4:
        printf("\nAbril\n");
        break;
    case 5:
        printf("\nMayo\n");
        break;
    case 6:
        printf("\nJunio\n");
        break;
    case 7:
        printf("\nJulio\n");
        break;
    case 8:
        printf("\nAugosto\n");
        break;
    case 9:
        printf("\nSeptiembre\n");
        break;
    case 10:
        printf("\nNoviembre\n");
        break;
    case 11:
        printf("\nOctubre\n");
        break;
    case 12:
        printf("\nDeciembre\n");
        break;
    default:
        printf("\nEl mes no existe\n");
        break;
    }

}
