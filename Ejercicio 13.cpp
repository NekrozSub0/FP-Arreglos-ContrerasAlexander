#include <iostream>
using namespace std;

void mistrcpy(char str1[], const char str2[]) {
    int i = 0;
    while (str2[i] != '\0') {
        str1[i] = str2[i];
        i++;
    }
    str1[i] = '\0';
}

int main(){
	//Declaracion de variables
	char str1[30], str2[30];
	//Entrada
	cout<<"Ingrese el arreglo"<<endl;
	cin.getline(str2,30);
	//Proceso
	mistrcpy(str1, str2);
	//Salida
	cout<<"Arreglo copiado: "<<str2<<endl;
	cout<<"Arreglo original: "<<str1<<endl;
	return 0;
}