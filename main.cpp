#include <iostream>
#include <stdlib.h>
using namespace std;

bool esNumero(char c);
bool esMayuscula(char c);
bool esMinuscula(char c);
bool esLetra(char c);
bool esCaracterEspecial(char c);

int main(void){

    cout << esNumero('E') << endl;
    cout << esMayuscula('E') << endl;
    cout << esMinuscula('E') << endl;
    cout << esLetra('E') << endl;
    cout << esCaracterEspecial('E') << endl;

    return 0;
}

bool esNumero(char c){
    return 48<=c && c<=57;
}
bool esMayuscula(char c){
    return 65<=c && c<=90;
}
bool esMinuscula(char c){
    return 97<=c && c<=122;
}
bool esLetra(char c){
    return esMayuscula(c) || esMinuscula(c);
}
bool esCaracterEspecial(char c){
    return !esNumero(c) && !esLetra(c);
}
