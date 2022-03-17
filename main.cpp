#include <iostream>
#include <math.h>
#include <fstream>
using namespace std;

class Complejo{
private:
    double real;
    double imaginario;
public:
    Complejo(void){
        this->real = 0.0;
        this->imaginario = 0.0;
        //cout << "Objeto construido, this -> " << this << endl;
    };
    Complejo(double real, double imaginario){
        this->real = real;
        this->imaginario = imaginario;
        //cout << "Objeto construido, this -> " << this << endl;
    };
    ~Complejo(void){
        //cout << "Objeto destruido, this -> " << this << endl;
    };
    void pideleAlUsuarioTusDatos(void){
        cout<<"Dame mi real ";
        cin>>this->real;
        cout<<"Dame mi imaginario ";
        cin>>this->imaginario;
    };
    void muestraTusDatos(void){
        cout << this->real;
        if(this->imaginario<0)
            cout << this->imaginario;
        else
            cout << "+" << this->imaginario;
		cout << "i";
    };
    void guardaTusDatos(ofstream& ASalida) {
        ASalida << this->real;
        if(this->imaginario<0)
            ASalida << this->imaginario;
        else
            ASalida << "+" << this->imaginario;
		ASalida << "i";
    };
    void cargaTusDatos(ifstream& AEntrada) {
        char caracter;
        AEntrada >> this->real;
        AEntrada >> caracter;
        AEntrada >> this->imaginario;
        AEntrada >> caracter;
    };
    double dameTuReal(void){
        return this->real;
    };
    void modificaTuReal(double real){
        this->real = real;
    };
    double dameTuImaginario(void){
        return this->imaginario;
    };
    void modificaTuImaginario(double imaginario){
        this->imaginario = imaginario;
    };
    void modificaTusDatos(double real, double imaginario){
        this->real = real;
        this->imaginario = imaginario;
    };
};

//  Direccion   !=  Dato

int main(void){

    Complejo a;      //Instancia de la clase punto
    Complejo*ptr;    //Apuntador que guarda una direccion

    ptr = &a;


    a.muestraTusDatos(); cout<< endl;       //Contenido de a
    cout << &a << endl;                     //Direccion de a
    cout << ptr << endl;                    //Contenido de ptr
    cout << &ptr << endl;                   //Direccion de ptr

    (*ptr).muestraTusDatos(); cout<< endl;  //Contenido de la direccion contenida en ptr
                                            //ptr, ve a la direccion que contienes y usa el objeto de ahí

    ptr->muestraTusDatos(); cout<< endl;    //Contenido de la direccion contenida en ptr
                                            //ptr, ve a la direccion que contienes y usa el objeto de ahí

    return 0;
}
