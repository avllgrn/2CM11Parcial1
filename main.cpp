#include <iostream>
#include <stdlib.h>
using namespace std;

int main(void){
    //Ejercicio 1: (Duracion de 15 mins, lo explicamos a las 7:43)
    //Codifica un programa que lea una direccion de email.
    //El programa debe mostrar cada parte de la direccion por separado.
    //Nota: El usuario ingresa una direccion valida:
    //Usuario:
    //Servidor:
    //Dominio:

    string email, usuario, servidor, dominio;
    cout<<"Ingresa email ";cin>>email;

    usuario.append(email, 0, email.find('@'));
    servidor.append(email, email.find('@')+1, email.find('.')-email.find('@')-1);
    dominio.append(email, email.find('.'), email.size()-email.find('.'));

    cout<<endl
        <<"Tu email es: "<<email<<endl
        <<"Tu usuario es : "<<usuario<<endl
        <<"Tu servidor es : "<<servidor<<endl
        <<"Tu dominio es : "<<dominio<<endl
        <<endl;

    return 0;
}
