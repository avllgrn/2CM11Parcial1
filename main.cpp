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

int main(void){
    return 0;
}
