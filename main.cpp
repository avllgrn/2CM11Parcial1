#include <iostream>
#include <stdlib.h>
using namespace std;

int main(void){
    int i,n;

    string Cadena1;
    cout<<"Cadena1: "<<Cadena1<<endl<<endl;

    string Cadena2("La cadena que quieras =)");
    cout<<"Cadena2: "<<Cadena2<<endl<<endl;

    string Cadena3(7,'*');
    cout<<"Cadena3: "<<Cadena3<<endl<<endl;

    Cadena1.assign(Cadena2);
    cout<<"Cadena1: "<<Cadena1<<endl<<endl;

    cout<<"Cadena1: "<<Cadena1<<" tiene "<<Cadena1.length()<<" caracteres."<<endl<<endl;

    n = Cadena1.size();
    for(i=0;i<n;i++)
        cout<<"Cadena1.at("<<i<<") = "<<Cadena1.at(i)<<endl;

    return 0;
}
