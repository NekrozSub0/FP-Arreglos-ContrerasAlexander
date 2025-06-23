#include <iostream>
#include <string.h>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	int acumulado=0, aux;
	double media, mediana, moda;
	int arreglo[30];
	srand(time(0));
	
	for(int i=0;i<30;i++){
	arreglo[i]=rand()%901+100;	
	cout<<"Numero aleatorio generado "<<i+1<<" : "<<arreglo[i]<<endl;
	}
	
	//Media
	for(int i=0;i<30;i++){
	acumulado=acumulado+arreglo[i];
	media=acumulado/30.0;	 
	}
	cout<<"La media es "<<media<<endl;
	
	//Moda
    int mayorconteo=0;
	moda=arreglo[0];
    for (int i=0; i<30; i++){
        int conteon=0;
        for(int j=0; j<30; j++){
            if(arreglo[j]==arreglo[i]){
			conteon++;
			}
		}
        if (conteon>mayorconteo) {
            mayorconteo=conteon;
            moda=arreglo[i];
        }
    }
	if (mayorconteo > 1){
		cout << "La moda es " << moda << " (ocurre " << mayorconteo << " veces)" << endl;
	}
	else{
		cout << "No hay moda (todos los numeros son unicos)" << endl;

	}
	
	//Mediana
	aux=0;
    for(int i=0;i<30;i++){
	for(int j=i+1;j<30;j++){
		if(arreglo[i]>arreglo[j]){
			aux=arreglo[i];
			arreglo[i]=arreglo[j];
			arreglo[j]=aux;
		}
	}
	}
    mediana=(arreglo[14]+arreglo[15])/2.0;
	cout<<"La mediana es "<<mediana<<endl;
	
	return 0;
}