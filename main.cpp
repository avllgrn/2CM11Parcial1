#include <iostream>
#include <stdlib.h>
using namespace std;

int main(void){
    int i,n;

    string Cadena1;
    cout<<"Cadena1: "<<Cadena1<<endl<<endl;
    system("pause");
    system("cls");

    string Cadena2("Asignada en contructor");
    cout<<"Cadena2: "<<Cadena2<<endl<<endl;
    system("pause");
    system("cls");

    string Cadena3 = "Asignada despues de contructor";
    cout<<"Cadena3: "<<Cadena3<<endl<<endl;
    system("pause");
    system("cls");

    Cadena2 = "Una cadena asignada con =";
    cout<<"Cadena2: "<<Cadena2<<endl<<endl;
    cout<<"Cadena2.size(): "<<Cadena2.size()<<endl;
    cout<<"Cadena2.length(): "<<Cadena2.length()<<endl<<endl;
    system("pause");
    system("cls");

    if(Cadena1.empty())
        cout<<"Cadena1 esta vacia."<<endl<<endl;
    else
        cout<<"Cadena1 NO esta vacia."<<endl<<endl;

    if(Cadena2.empty())
        cout<<"Cadena2 esta vacia."<<endl<<endl;
    else{
        Cadena2.clear();
        cout<<"Cadena2 NO estaba vacia."<<endl;
        cout<<"Cadena2: "<<Cadena2<<endl<<endl;
    }

    if(Cadena3.empty())
        cout<<"Cadena2 esta vacia."<<endl<<endl;
    else{
        Cadena3 = "";
        cout<<"Cadena3 NO estaba vacia."<<endl;
        cout<<"Cadena3: "<<Cadena3<<endl<<endl;
    }
    system("pause");
    system("cls");

    string Cadena4;
    cout<<"Cadena4: "<<Cadena4<<endl<<endl;
    cout<<"Cadena4.size(): "<<Cadena4.size()<<endl;
    cout<<"Cadena4.length(): "<<Cadena4.length()<<endl;
    cout<<"Cadena4.capacity(): "<<Cadena4.capacity()<<endl<<endl;

    Cadena4 = "Cadena con mas de 15 caracteres";
    cout<<"Cadena4: "<<Cadena4<<endl<<endl;
    cout<<"Cadena4.size(): "<<Cadena4.size()<<endl;
    cout<<"Cadena4.length(): "<<Cadena4.length()<<endl;
    cout<<"Cadena4.capacity(): "<<Cadena4.capacity()<<endl<<endl;

    Cadena4.clear();
    cout<<"Cadena4: "<<Cadena4<<endl<<endl;
    cout<<"Cadena4.size(): "<<Cadena4.size()<<endl;
    cout<<"Cadena4.length(): "<<Cadena4.length()<<endl;
    cout<<"Cadena4.capacity(): "<<Cadena4.capacity()<<endl<<endl;

    Cadena4 = "Otra cadena con mas de 15 caracteres";
    cout<<"Cadena4: "<<Cadena4<<endl<<endl;
    cout<<"Cadena4.size(): "<<Cadena4.size()<<endl;
    cout<<"Cadena4.length(): "<<Cadena4.length()<<endl;
    cout<<"Cadena4.capacity(): "<<Cadena4.capacity()<<endl<<endl;
    system("pause");
    system("cls");

    Cadena1 = "Programacion";
    cout<<"Cadena1: "<<Cadena1<<endl<<endl;
    n = Cadena1.size();
    for(i=0;i<n;i++)
        cout<<"Cadena1.at("<<i<<")\t= "<<Cadena1.at(i)<<endl;

    cout<<endl;
    for(i=0;i<n;i++)
        cout<<"Cadena1["<<i<<"]\t= "<<Cadena1[i]<<endl;
    system("pause");
    system("cls");

    Cadena1 = "Programacion";
    cout<<"Cadena1: "<<Cadena1<<endl;
    Cadena1 += " Orientada";
    cout<<"Cadena1: "<<Cadena1<<endl;
    Cadena1 += " a";
    cout<<"Cadena1: "<<Cadena1<<endl;
    Cadena1 += " Objetos";
    cout<<"Cadena1: "<<Cadena1<<endl<<endl;
    system("pause");
    system("cls");

    Cadena2 = "Fundamentos";
    cout<<"Cadena2: "<<Cadena2<<endl;
    Cadena2.append(" de");
    cout<<"Cadena2: "<<Cadena2<<endl;
    Cadena2.append(" Programacion");
    cout<<"Cadena2: "<<Cadena2<<endl<<endl;
    system("pause");
    system("cls");

    string Cadena5;
    Cadena5.append(Cadena2,0,11);
    cout<<"Cadena5: "<<Cadena5<<endl;
    Cadena5.append(Cadena2,11,3);
    cout<<"Cadena5: "<<Cadena5<<endl;
    Cadena5.append(Cadena2,14,13);
    cout<<"Cadena5: "<<Cadena5<<endl;
    Cadena5.append(Cadena1,11,11);
    cout<<"Cadena5: "<<Cadena5<<endl;
    Cadena5.append(Cadena1,22,2);
    cout<<"Cadena5: "<<Cadena5<<endl;
    Cadena5.append(Cadena1,24,8);
    cout<<"Cadena5: "<<Cadena5<<endl;
    system("pause");
    system("cls");

    string Cadena6;
    cout<<"Ingresa n ";cin>>n;
    Cadena6.append(n,'*');
    cout<<"Cadena6: "<<Cadena6<<endl<<endl;
    system("pause");
    system("cls");

    string Cadena7;
    n = Cadena1.size();
    for(i=0;i<n;i++){
        //Cadena7.append(Cadena1.at(i));//NO SIRVE. Solo con cadenas
        Cadena7.push_back(Cadena1.at(i));
        cout<<"Cadena7: "<<Cadena7<<endl;
    }
    cout<<endl;
    system("pause");
    system("cls");

    string Cadena8;
    Cadena8.assign(Cadena2);
    cout << Cadena8 <<endl<<endl;
    Cadena8.assign(Cadena1,25,7);
    cout << Cadena8 <<endl<<endl;
    Cadena8.assign("cadena tipo C");
    cout << Cadena8 <<endl<<endl;
    Cadena8.assign("Estructuras de Datos",11);
    cout << Cadena8 <<endl<<endl;
    Cadena8.assign(10,'*');
    cout << Cadena8 <<endl<<endl;
    system("pause");
    system("cls");

    string Cadena9;
    Cadena9.assign("Programacion Objetos");
    cout<<"Cadena9: "<<Cadena9<<endl<<endl;
    Cadena9.insert(13,"Orientada de ");
    cout<<"Cadena9: "<<Cadena9<<endl<<endl;
    Cadena9.erase(23,2);
    cout<<"Cadena9: "<<Cadena9<<endl<<endl;
    Cadena9.insert(23,"a");
    cout<<"Cadena9: "<<Cadena9<<endl<<endl;

    return 0;
}
