#include <iostream>
#include <stdlib.h>
using namespace std;

int main(void){
    //Tarea1: Codifica un programa que lea una cadena
    //y la copie en otra, de manera invertida.

    string Destino, Origen;
    int i,n;

    cout<<"Ingresa una cadena ";
    getline(cin,Origen);
    n = Origen.size();

    for(i=n-1; i>=0; i--)
        Destino.push_back(Origen.at(i));


    cout<<"Origen:  "<<Origen<<endl;
    cout<<"Destino: "<<Destino<<endl<<endl;

    return 0;
}
