#include <iostream>
#include <stdlib.h>
using namespace std;

bool esNumero(char c);
bool esMayuscula(char c);
bool esMinuscula(char c);
bool esLetra(char c);
bool esCaracterEspecial(char c);

int main(void){
    //Tarea2: Codifica un programa que lea una cadena
    //y diga si es plalindrome.

    string Cadena,Destino, Origen;
    int i,n;

    cout<<"Ingresa una cadena ";
    getline(cin,Cadena);

    n = Cadena.size();
    for(i=0; i<n; i++)
        if(!esCaracterEspecial(Cadena.at(i)))
            Origen.push_back(tolower(Cadena.at(i)));

    n = Origen.size();
    for(i=n-1; i>=0; i--)
        Destino.push_back(Origen.at(i));


    cout<<"Cadena:  "<<Cadena<<endl;
    cout<<"Origen:  "<<Origen<<endl;
    cout<<"Destino: "<<Destino<<endl<<endl;

    if(Origen.compare(Destino)==0)
        cout<<Cadena<<" es palindrome"<<endl<<endl;
    else
        cout<<Cadena<<" NO es palindrome"<<endl<<endl;

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
