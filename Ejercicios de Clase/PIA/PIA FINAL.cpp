//PIA Final//
// Gabriel Agundiz 2109526 ITS, Enrique Espinoza 2109599 IME
//, Luis Tenorio 2109186 IMTC//
//-------------Librerias------------------------------------------------------------------------------//
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>

//----------------Variables---------------------------------------------------------------------------------//
	// Funciones//
void crear(),nombre(),fecha(),celular(),sexo(),edad(),peso();
void estatura(),talla(),presion(),sangre(),alergias();
void padecimientos(), guardar(), paciente(),revisar(),eliminar();
	//Switch//
int opr;
	//Ciclos//
int i,f,j,np,op,pac,imp,nump;
	//Datos enteros//
int ed,se,ts;
	//Datos decimales//
float cel,pe,est,tal,pre;
	//Textos//
char nom[50],sex,fe[10],*sang,ale[40],pad[40];


//------------------------Programa------------------------------------------------------------------------//
main(){
	system("COLOR 80"); //Cambio de color del fondo//
	printf("\t\t\tBienvenidos a la clinica, Favor de llenar la ");
	printf("informacion que se le solicite.\n");
	op=1;
	do{
		do{
		printf("Que es lo que desea realizar?  ");
		printf("(1- Crear Archivo, 2- Introducir Pacientes,");
		printf(" 3- Revisar Informacion, 4- Eliminar Archivo)\n");
		scanf("%d",&opr);
		}while(opr!=1&&opr!=2&&opr!=3&&opr!=4);
		
		switch(opr){
			case 1: 
				crear();
				break;
			
			case 2:
				paciente();
				break;
			
			case 3:
				revisar();
				break;
			
			case 4:
				eliminar();
				break;
		}		
		
		do{
			printf("\nDesea volver a ejecutar el programa? ");
			printf("(1- SI 2- NO): ");
			scanf("%d",&op);
		}while(op!=1&&op!=2);
		
	}while(op==1);
	
	printf("Gracias por utilizar el programa\n");
	system("PAUSE");
}

//---------------------------Crear-------------------------------------------------------------------------------------//
void crear(){
		FILE *archivo;
		//Crear el archivo 
		archivo=fopen("Pacientes.txt","w");
		//Formato para imprimir en el archivo
		fprintf(archivo, "---------------");
		//Imprimir en consola
		printf("Se a creado el archivo");
		//Cerrar archivo
		fclose(archivo);	
}

//---------------------------------Paciente--------------------------------------------------------//
void paciente(){
	do{
		printf("Ingrese la cantidad de pacientes a los que se ");
		printf("les realizara un registro: ");
		scanf("%d", &np);		
		}while(np<=0);
		
		f=np;
		pac=1;
		
			while(pac<=np){ //Ciclo para ir cambiando de paciente//
				printf("Ingrese los datos del paciente ");
				printf("Num. %d \n",pac);
				for(j=1;j<=12;j++){ //Ciclo para ir cambiando //
					if (j==1){	//de dato solicitado//
						nombre();
					}
					if (j==2){
						fecha();
					}
					if(j==3){
						celular();
					}
					if(j==4){
						sexo();
					}
					if(j==5){
						edad();
					}
					if(j==6){
						peso();
					}
					if(j==7){
						estatura();
					}
					if(j==8){
						talla();
					}
					if(j==9){
						presion();
					}
					if(j==10){
						sangre();
					}
					if(j==11){
						alergias();
					}
					if(j==12){
						padecimientos();
						guardar();
					}
				}
			pac=pac+1;	//Contador del numero de pacientes//
		}
}

//---------------------------Nombre------------------------------------------------------------------------------------//
void nombre(){
	printf("Nombre del paciente(Sin espacios):");
	scanf("%s", &nom);
	printf("\n");
}

//--------------------------Fecha-------------------------------------------------------------------------------------//
void fecha(){
	printf("Ingresa la fecha de ingreso (formato: dd/mm/yyyy):");
	scanf("%s", &fe);
	printf("\n");
}

//--------------------------Celular------------------------------------------------------------------------------------//
void celular(){
	do{
	printf("Numero de celular: ");
	scanf("%f",&cel);		
	}while(cel<=0);
	printf("\n");
}

//--------------------------Sexo----------------------------------------------------------------------------------------//
void sexo(){ 
	do{
		printf("Sexo (1- M/ 2- F):");
		scanf("%d", &se);
	}while(se!=1 && se!=2);
	
	if(se==1){
		sex='M';
	}
	if(se==2){
		sex='F';
	}
	printf("\n");
}

//--------------------------Edad-----------------------------------------------------------------------------//
void edad(){
	do{
		printf("Edad (en anualidades):");
		scanf("%d", &ed);
	}while(ed<=0 || ed>122); 
	/* Se utiliza 122 de limite porque es el record 
	de años de vida de una persona*/
	printf("\n");
}

//-------------------------Peso-----------------------------------------------------------------------//
void peso(){
	do{
		printf("Peso (en kilogramos): ");
		scanf("%f",&pe);
	}while (pe<1.0 || pe>594.8); 
	/* Se utiliza 594.8 de limite porque es el 
	record de peso en una persona*/
	printf("\n");
}

//-----------------------Estatura------------------------------------------------------------------------//
void estatura(){
	do{
		printf("Estatura (en centimetros): ");
		scanf("%f",&est);
	}while(est<40.0 || est>250.0); 
	/* Se utiliza 40 de limite inferior porque es 
	un valor bajo de la estatura de un recien nacido 
	y 250 cm de limite porque es el record de altura 
	de una persona*/
	printf("\n");
}

//---------------------------Talla----------------------------------------------------------------------//
void talla(){
	do {
		printf("Talla(cintura en centimetros): ");
		scanf("%f",&tal);
	}while(tal<0.0 || tal>200.0);
	printf("\n");
}

//--------------------------Presion-----------------------------------------------------------------------//
void presion(){
	do {
		printf("Presion arterial: ");
		scanf("%f", &pre);
	}while(pre<0.0 || pre>200.0);
	printf("\n");
}

//--------------------------Sangre------------------------------------------------------------------------//
void sangre(){
	do{
	printf("\nSeleccione el numero de su tipo de sangre: \n");	
	printf("\nTipos de Sangre:  ");
	printf("\n (1)O+ \t.(2)B+ \t.(3)A+ \t.(4)AB+");
	printf("\n(5)O- \t.(6)B- \t.(7)A- \t.(8)AB-\n");
	scanf("%d",&ts);		
	}while(ts!=1&&ts!=2&&ts!=3&&ts!=4&&ts!=5&&ts!=6&&ts!=7&&ts!=8);

	switch(ts){
		case 1: 
			sang="O+";
			break;
		case 2: 
			sang="B+";
			break;
		case 3: 
			sang="A+";
			break;
		case 4: 
			sang="AB+";
			break;
		case 5: 
			sang="O-";
			break;
		case 6: 
			sang="B-";
			break;
		case 7: 
			sang="O+";
			break;
		case 8: 
			sang="AB-";
			break;
		
	}
	printf("\n");
}

//--------------------------Alergias-----------------------------------------------------------------------//
void alergias(){
	printf("Alergias(En formaro: alergia1,alergia2,alergia3,...");
	printf(" / En caso de no tener, poner NA): ");
	scanf("%s",&ale);
	printf("\n");
}

//-------------------------Padecimientos--------------------------------------------------------------------//
void padecimientos(){
	printf("Padecimientos ");
	printf("(En formaro: padecimiento1,padecimiento2,padecimiento3,...");
	printf(" / En caso de no tener, poner NA): ");
	scanf("%s",&pad);	
	printf("\n");
}

//-------------------------Guardar--------------------------------------------------------------------------//
void guardar(){
	FILE *archivo;
	//Abrir el archivo para modificarlo//
	archivo=fopen("pacientes.txt","a");
	//Guardar los datos en el archivo//
	fprintf(archivo,"\nDatos del paciente \n");
	fprintf(archivo, "Nombre: %s \n", nom);
	fprintf(archivo, "Fecha de ingreso: %s \n", fe);
	fprintf(archivo, "Celular: %.0f \n",cel);
	fprintf(archivo, "Sexo: %c \n",sex);
	fprintf(archivo, "Edad: %d \n",ed);
	fprintf(archivo, "Peso(kilogramos): %.1f \n",pe);
	fprintf(archivo, "Estatura(centimetros): %.0f \n",est);
	fprintf(archivo, "Talla(cintura en cm): %.0f \n",tal);
	fprintf(archivo, "Presion Arterial: %.0f \n",pre);
	fprintf(archivo, "Sangre: %s \n",sang);
	fprintf(archivo, "Alergias: %s \n",ale);
	fprintf(archivo, "Padecimientos: %s \n", pad);
	fprintf(archivo, "\n------------------------------\n");
	//Cerar el archivo//
	fclose(archivo);
}

//-------------------------Revisar--------------------------------------------------------------------------//
void revisar(){
	FILE *archivo;
	char c;
	//Abrir el archivo para leerlo//
	archivo=fopen("pacientes.txt","r");
	//Se verifica si existe el archivo para leerlo//
	if (archivo!=NULL){
		printf("\nLos pacientes que se encuentran en el archivo ");
		printf("son los siguientes:  \n");
		//Se utiliza un ciclo para leer los caracteres 
		//del archivo y ponerlos en la consola//
		while(1){
			c=fgetc(archivo);
			if(feof(archivo))
				break;				
			
			printf("%c",c);
		}	
	}
	else{
		printf("Hubo un error al abrir el archivo ");
		printf("o es inexistente");
		printf("\n");
	}
	//Cerrar el archivo//
	fclose(archivo);
}

//-------------------------Eliminar--------------------------------------------------------------------------//
void eliminar(){
	FILE *archivo;
	//Eliminar el archivo//
	remove("pacientes.txt");	
	//Anuncio de eliminacion del archivo//
	printf("\nSe ha eliminado el archivo\n");
}



