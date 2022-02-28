#include <iostream>
#include <stdlib.h>
using namespace std;

bool esNumero(char c);
bool esMayuscula(char c);
bool esMinuscula(char c);
bool esLetra(char c);
bool esCaracterEspecial(char c);

int main(void){
    //Codifica un programa que lea una cadena string y diga
    //Cuantos numeros tiene
    //Cuantas minusculas tiene
    //Cuantas mayusculas tiene
    //Cuantas letras tiene
    //Cuantos caracteres especiales tiene
    string Cadena;
    int i,n,numeros,minusculas,mayusculas,letras,especiales;
    cout<<"Ingresa cadena ";
    getline(cin,Cadena);
    n = Cadena.size();

    numeros=0;
    for(i=0; i<n; i++){
        if(esNumero(Cadena.at(i)))
            numeros++;
    }
    cout<<Cadena<<" tiene "<<numeros<<" numeros."<<endl;

    minusculas=0;
    for(i=0; i<n; i++){
        if(esMinuscula(Cadena.at(i)))
            minusculas++;
    }
    cout<<Cadena<<" tiene "<<minusculas<<" minusculas."<<endl;

    mayusculas=0;
    for(i=0; i<n; i++){
        if(esMayuscula(Cadena.at(i)))
            mayusculas++;
    }
    cout<<Cadena<<" tiene "<<mayusculas<<" mayusculas."<<endl;

    letras=0;
    for(i=0; i<n; i++){
        if(esLetra(Cadena.at(i)))
            letras++;
    }
    cout<<Cadena<<" tiene "<<letras<<" letras."<<endl;

    especiales=0;
    for(i=0; i<n; i++){
        if(esCaracterEspecial(Cadena.at(i)))
            especiales++;
    }
    cout<<Cadena<<" tiene "<<especiales<<" caracteres especiales."<<endl;

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
