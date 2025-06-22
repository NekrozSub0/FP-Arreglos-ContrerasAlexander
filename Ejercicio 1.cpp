#include <iostream>
#include <string.h>
using namespace std;

int main(void){
	char arreglo[]="cáceres patrimonio de la humanidad";
	arreglo[0]=toupper(arreglo[0]);
	arreglo[9]=toupper(arreglo[9]);
	arreglo[20]=toupper(arreglo[20]);
	arreglo[23]=toupper(arreglo[23]);
	arreglo[26]=toupper(arreglo[26]);
	cout << arreglo;
	return 0;
}