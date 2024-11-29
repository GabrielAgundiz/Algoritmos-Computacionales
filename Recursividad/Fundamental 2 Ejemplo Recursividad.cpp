#include<iostream>
#include<cstdlib>
using namespace std;
int binario(int n){
if(n>1){
	binario(n/2);
	cout<<n%2;
	}      
}
int main( void ){
	system("color 0a");
	int nro;
	cout<<"Convertir a binario un numero decimal "<<endl<<endl;
	do{
		cout<<" INGRESE NUMERO: ";
		cin>>nro;
		if(nro<0){
			cout<<"\nINGRESE UN NUMERO ENTERO Y POSITIVO… \n";	
			} 
	}while(nro<0);
	cout<<endl;
	cout<<"\n Numero:"<<nro<<endl;
	cout<<"\n Binario:";
    binario(nro);
return 0;
}
