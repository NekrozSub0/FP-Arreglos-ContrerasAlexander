#include <iostream>
#include <string.h>
using namespace std;

int main(){
	char arreglo[30];
	cout<<"Ingrese la entrada"<<endl;
	cin.getline(arreglo, 30);
	int i=0;
	
	while (arreglo[i]!='\0'){
		if(arreglo[i]==' '){
			arreglo[i]='\n';
		}
		i++;
	}
	
	cout<<arreglo<<endl;
	
	return 0;
}