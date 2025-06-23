#include <iostream>
#include <string.h>
using namespace std;

int main(){
	int n, nmayor, nmenor;
	cout<<"Ingrese la cantidad de numeros a leer"<<endl;
	cin>>n;	
	
	int arreglo[n];	
	int contarnmayor=0, contarnmenor=0;
	int i, j, aux;
	
	for(i=1;i<=n;i++){
		cout<<"Ingrese el numero "<<i+1<<endl;
		cin>>arreglo[i];
	}
	
	nmayor = arreglo[0];
    nmenor = arreglo[0];
	
	for(i=0;i<=n-1;i++){
		if(arreglo[i]>nmayor){
			nmayor=arreglo[i];
		}
	}
	for(i=0;i<=n;i++){
		if(arreglo[i]<nmenor){
			nmenor=arreglo[i];
		}
	}

	for(i=0;i<=n;i++){
		if(arreglo[i]==nmayor){
			contarnmayor++;
		}
	}
	for(i=0;i<=n;i++){
		if(arreglo[i]==nmenor){
			contarnmenor++;
		}
	}
	
	
	cout<<"Numero mayor de los numeros leidos: "<<nmayor<<endl;
	cout<<"Leido "<<contarnmayor<<" veces "<<endl;
	
	cout<<"Numero menor de los numeros leidos: "<<nmenor<<endl;
	cout<<"Leido "<<contarnmenor<<" veces "<<endl;
	
	cout<<endl;
	system("PAUSE");
	
	return 0;
}