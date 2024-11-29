//Este programa calcula el promedio de acuerdo a unos proyectos, examenes y un cuestionario
#include <iostream>
#include<stdio.h>
using namespace std;

int main()
{
    float examen1, examen2, proyecto1, proyecto2, proyecto3, cuestionario, promedio;
    printf("2109526 Gabriel Agundiz");
	printf("\nCalculadora de promedios " );
    printf("\nEscribe la calificacion correspondiente a cada apartado: ");
    printf("\nExamen 1: ");
    scanf("%f",&examen1);
    printf("Examen 2: ");
    scanf("%f",&examen2);
    printf("\nProyecto 1: ");
    scanf("%f",&proyecto1);
    printf("Proyecto 2: ");
    scanf("%f",&proyecto2);
    printf("Proyecto 3: ");
    scanf("%f",&proyecto3);
    printf("\nCuestionario: ");
    scanf("%f",&cuestionario);
    //Con ponderación
    //promedio = (examen1 * 0.166) + (examen2 * 0.166) + (proyecto1 * 0.166) + (proyecto2 * 0.166) + (proyecto3 * 0.166) + (cuestionario * 0.166);
    //Sin ponderación
    promedio = (examen1 + examen2 + proyecto1 + proyecto2 + proyecto3 + cuestionario) / 6;
    printf("\nPromedio = %f",promedio);
    if (promedio < 70){
        printf("\nEl alumno esta reprobado");
    }
    else{
        printf("\nEl alumno esta aprobado ");
    }
    return 0;
}
