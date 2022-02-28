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
    int i,numeros,minusculas,mayusculas,especiales;
    cout<<"Ingresa cadena ";
    getline(cin,Cadena);

    numeros=0;
    minusculas=0;
    mayusculas=0;
    especiales=0;
    for(i=0; i<Cadena.size(); i++){
        if(esNumero(Cadena.at(i)))
            numeros++;
        else if(esMinuscula(Cadena.at(i)))
            minusculas++;
        else if(esMayuscula(Cadena.at(i)))
            mayusculas++;
        else
            especiales++;
    }
    cout<<Cadena<<" tiene "<<numeros<<" numeros."<<endl;
    cout<<Cadena<<" tiene "<<minusculas<<" minusculas."<<endl;
    cout<<Cadena<<" tiene "<<mayusculas<<" mayusculas."<<endl;
    cout<<Cadena<<" tiene "<<minusculas+mayusculas<<" letras."<<endl;
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
