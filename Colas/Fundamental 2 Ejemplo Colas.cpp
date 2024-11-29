#include <iostream> // util para operadores de entrada y salida cout y cin
#include <conio.h> // util para la función getch ()
#include <windows.h> // libreria para la función Sleep ()
#include <cstdio>

using namespace std; // indica que se va utilizar eapacios de nombres esándar

void insertar (void) ;
void atender (void) ;
void visualizar (void) ;
void portada (void) ;

//Definición de la estructura Cola
struct cola{
   char nombre [20];
   struct cola *sig; // puntero para enlazar los nodos de la cola
	}*cabeza,*auxiliar,*final; // punteros instancias de la estructura cola
	//Definición de la Función principal main ()

int main (){
		system ("COLOR 3f");
       char opc;
       do{
                system ("cls");
                cout<<"\n\nPROGRAMA PARA GESTIONAR TURNOS PARA ATENCION\n\n";
                cout<<"1.- Asignar Turno\n";
                cout<<"2.- Visualizar turnos en espera\n";
                cout<<"3.- Atender t turno\n";
                cout<<"4.- Salir\n";
                cout<<"Ingrese la opcion : ";
                opc=getch( );       	
                switch (opc){
        			case '1':
             		insertar (); // 1lamado a la función insertar
             		break ;
        		case '2':
             		visualizar () ;// 1lamado a la función visualizar
             		break ;
        		case '3':
            		atender (); // 1lamado a la función atender
        		case '4':
            		delete auxiliar;// librera la memoria asignada
            		system ("cls");
            		cout<<"Hasta pronto...";
              		Sleep (2000); // función de espera antes de salir
            		exit (1); //función para salir de la ejecución
             		break;                	
				}
		}while(opc!='4');
		return 0;
	}

//Función para insertar datos a la estructura de tipo Cola
void insertar (void){
	system ("COLOR 4f"); //asigna color de fondo
    auxiliar = new cola; //reserva memoria
    system ("cls") ;
    cout<<"ASIGNACIÓN DE TURNOS\n\n ";
    cout<<"Digite el Nombre: ";
    gets(auxiliar->nombre); // lee el nombre desde el tecado y lo almacena
    auxiliar->sig=NULL; // el apuntador auxiliar apunta al siguiente nodo
    if (final=NULL){ // si en final no hay registros o está vacio
       final=cabeza=auxiliar; //final guarda el contenido de auxiliar y cabeza
   }
    else { // en caso de qe final no esté vacio, esdecir que ya tenga datos
        final->sig=auxiliar; // El contenido de auxiliar va al nodo siguiente
        final=auxiliar; // a final se le asigna el contenido de auxiliar	
	}
}

//Función para Visualizar los datos ingresados a la estructura de tipo Cola
void visualizar (void)
     {
       system ("COLOR 6f"); // aplica el color de fondo
       system ("cls");
       if (cabeza==NULL){
            cout<<"NO HAY PERSONAS EN LA COLA";
            getch () ;       	
	   }
       else{
       	    cout<<"LISTADO DE USUARIOS EN ESPERA\n\n";
            auxiliar-cabeza;
			
            while (auxiliar!=NULL) //mientras auxiliar tenga datos
            {
                cout<<auxiliar->nombre <<"\n";
               auxiliar=auxiliar->sig;//auxiliar guarda el dato del sigte nodo
           	}
            getch () ;
	   }
}

