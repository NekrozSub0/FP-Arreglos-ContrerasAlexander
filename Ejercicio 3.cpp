#include <iostream>
#include <string.h>
using namespace std;

int main(){
	char arreglo[30], letra;
	cout<<"Ingrese la cadena de entrada"<<endl;
	cin.getline(arreglo, 30);
	cout<<"Ingrese la letra a contar"<<endl;
	cin>>letra;
	int i=0, ocurrencia=0;
	
	while (arreglo[i]!='\0'){
		if(arreglo[i]==letra){
			ocurrencia++;
		}
		i++;
	}
	
	cout<<ocurrencia<<endl;
	
	return 0;
}