#include <iostream>
using namespace std;

//  Direccion   !=  Dato

int main(void){

    int a;      //Variable que guarda un dato
    int*ptr;    //Apuntador que guarda una direccion

    a = 123;
    ptr = &a;


    cout << a << endl;      //Contenido de a
    cout << &a << endl;     //Direccion de a
    cout << ptr << endl;    //Contenido de ptr
    cout << &ptr << endl;   //Direccion de ptr
    cout << *ptr << endl;   //Contenido de la direccion contenida en ptr
                            //ptr, ve a la direccion que contienes y usa el dato de ahí

    return 0;
}
