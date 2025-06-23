#include <iostream>
#include <string.h>
using namespace std;

int main(){
	int n, sumapositivos=0, sumanegativos=0, sumatotal;
	cout<<"Ingrese la cantidad de numeros a leer"<<endl;
	cin>>n;
	
	int arreglo[n];

	
	for(int i=1;i<=n;i++){
		cout<<"Ingrese el numero "<<i+1<<endl;
		cin>>arreglo[i];
	}
	
	for(int i=1;i<=n;i++){
		if(arreglo[i]>0){
			sumapositivos=sumapositivos+arreglo[i];
		}else{
			sumanegativos=sumanegativos+arreglo[i];
		}
	}

	sumatotal=sumapositivos+sumanegativos;
	
	cout<<"Suma de los numeros positivos leidos: "<<sumapositivos<<endl;
	cout<<"Suma de los numeros negativos leidos: "<<sumanegativos<<endl;
	cout<<"Suma de los numeros positivos y negativos leidos: "<<sumatotal<<endl;
	
	cout<<endl;
	system("PAUSE");
	
	return 0;
}