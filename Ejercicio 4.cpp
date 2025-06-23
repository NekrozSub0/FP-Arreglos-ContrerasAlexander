#include <iostream>
#include <string.h>
using namespace std;

int main(){
	int n;
	string arreglo[20];
	string nombre, aux;
	int i, j;
	
	cout<<"Ingrese la cantidad de nombres a leer"<<endl;
	cin>>n;
	
	for(i=0;i<n;i++){
		cout<<"Ingrese el nombre numero "<<i+1<<endl;
		cin>>arreglo[i];
	}
	
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(arreglo[i]>arreglo[j]){
				aux=arreglo[i];
				arreglo[i]=arreglo[j];
				arreglo[j]=aux;
			}
		}
	}
	
	cout<<"Arreglo ordenado alfabeticamente"<<endl;
	for(i=0;i<n;i++){
		cout<<"Nombre "<<i+1<<" = "<<arreglo[i]<<endl;
	}
	
	cout<<endl;
	system("PAUSE");
	
	return 0;
}