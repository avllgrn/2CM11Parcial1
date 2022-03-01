#include <iostream>
#include <stdlib.h>
using namespace std;

bool sonIdenticas(string cad1, string cad2);

int main(void){
    string Destino, Origen;
    int i,n;

    cout<<"Ingresa una cadena ";
    getline(cin,Origen);
    n = Origen.size();

    for(i=n-1; i>=0; i--)
        Destino.push_back(Origen.at(i));


    cout<<"Origen:  "<<Origen<<endl;
    cout<<"Destino: "<<Destino<<endl<<endl;

    if(sonIdenticas(Origen,Destino))
        cout<<Origen<<" es palindrome"<<endl<<endl;
    else
        cout<<Origen<<" NO es palindrome"<<endl<<endl;

    if(Origen.compare(Destino)==0)
        cout<<Origen<<" es palindrome"<<endl<<endl;
    else
        cout<<Origen<<" NO es palindrome"<<endl<<endl;

    return 0;
}

bool sonIdenticas(string cad1, string cad2){
    int i, n;
    for(i=0; i<cad1.size(); i++)
        if(cad1.at(i) != cad2.at(i))
            return false;

    return true;
}
