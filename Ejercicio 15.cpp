#include <iostream>
using namespace std;

int mistrcmp(const char str1[], const char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return (str1[i] > str2[i]) ? 1 : -1;
        }
        i++;
    }
	
    if (str1[i] == '\0' && str2[i] == '\0') return 0;
    if (str1[i] == '\0') return -1;
    return 1;
}

int main(){
	char str1[30], str2[30];
	int resultado;
	
	cout<<"Ingrese el arreglo 1"<<endl;
	cin.getline(str1,30);
	cout << "Ingrese el arreglo 2"<<endl;
    cin.getline(str2, 30);
    
	resultado = mistrcmp(str1, str2);
	
    cout << "Resultado de comparacion: ";	
    if (resultado == 0) {
        cout <<"0. Las cadenas son iguales."<<endl;
    } else if (resultado == 1) {
        cout <<"1. str1 es mayor que str2."<< endl;
    } else {
        cout <<"-1. str2 es mayor que str1."<< endl;
    }
	return 0;
}