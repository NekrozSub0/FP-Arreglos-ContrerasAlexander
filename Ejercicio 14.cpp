#include <iostream>
using namespace std;

void mistrcat(char str1[], const char str2[]) {
    int i = 0;
    while (str1[i] != '\0') {
        i++;
    }
    int j = 0;
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';
}

int main() {
    char str1[50];
    char str2[50];

    cout << "Ingrese la cadena base (str1): ";
    cin.getline(str1, 50);

    cout << "Ingrese la cadena para concatenar (str2): ";
    cin.getline(str2, 50);

    mistrcat(str1, str2);

    return 0;
}