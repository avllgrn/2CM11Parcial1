#include <iostream>
#include <math.h>
#include <fstream>
using namespace std;

class Punto{
private:
    double x;
    double y;
public:
    Punto(void){
        this->x = 0.0;
        this->y = 0.0;
        //cout << "Objeto construido, this -> " << this << endl;
    };
    Punto(double x, double y){
        this->x = x;
        this->y = y;
        //cout << "Objeto construido, this -> " << this << endl;
    };
    ~Punto(void){
        //cout << "Objeto destruido, this -> " << this << endl;
    };
    void pideleAlUsuarioTusDatos(void){
        cout<<"Dame mi x ";
        cin>>this->x;
        cout<<"Dame mi y ";
        cin>>this->y;
    };
    void muestraTusDatos(void){
        cout << "(" << this->x << ", " << this->y <<")";
    };
    void guardaTusDatos(ofstream& ASalida) {
        ASalida << "(" << this->x
				<< ", " << this->y
				<< ")" << endl;
    };
    void cargaTusDatos(ifstream& AEntrada) {
        char caracter;
        AEntrada >> caracter;
        AEntrada >> this->x;
        AEntrada >> caracter;
        AEntrada >> this->y;
        AEntrada >> caracter;
    };
    double dameTuX(void){
        return this->x;
    };
    void modificaTuX(double x){
        this->x = x;
    };
    double dameTuY(void){
        return this->y;
    };
    void modificaTuY(double y){
        this->y = y;
    };
    void modificaTusDatos(double x, double y){
        this->x = x;
        this->y = y;
    };
};

//  Direccion   !=  Dato

int main(void){

    Punto a;      //Instancia de la clase punto
    Punto*ptr;    //Apuntador que guarda una direccion

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
