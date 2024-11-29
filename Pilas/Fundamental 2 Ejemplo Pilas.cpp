#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
using namespace std;
struct pila 					//Nombre de la estructura
    {
	int numero;					// miembro de tipo entero
    struct pila *sig;			// apuntador miembro del tipo struc pila
   }*inicio=NULL, *final=NULL; // apuntadores instancias de la estructura

void insertar();
void extraer();
void visualizar();
