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
    Complejo C1, C2, C3, C4, C5, C6;

    cout<<endl<<"Ingresa C1"<<endl;
    C1.pideleAlUsuarioTusDatos();
    cout<<endl<<"Ingresa C1"<<endl;
    C2.pideleAlUsuarioTusDatos();

    C3.modificaTuReal(
		C1.dameTuReal() + C2.dameTuReal()
	);
    C3.modificaTuImaginario(
		C1.dameTuImaginario() + C2.dameTuImaginario()
	);

    C4.modificaTuReal(
		C1.dameTuReal() - C2.dameTuReal()
	);
    C4.modificaTuImaginario(
		C1.dameTuImaginario() - C2.dameTuImaginario()
	);

    C5.modificaTuReal(
		C1.dameTuReal()*C2.dameTuReal() - C1.dameTuImaginario()*C2.dameTuImaginario()
	);
    C5.modificaTuImaginario(
		C1.dameTuReal()*C2.dameTuImaginario() + C2.dameTuReal()*C1.dameTuImaginario()
	);

    C6.modificaTuReal(
        (C1.dameTuReal()*C2.dameTuReal() + C1.dameTuImaginario()*C2.dameTuImaginario())
        /
        (pow(C2.dameTuReal(),2) + pow(C2.dameTuImaginario(),2))
    );
    C6.modificaTuImaginario(
        (C2.dameTuReal()*C1.dameTuImaginario() - C1.dameTuReal()*C2.dameTuImaginario())
        /
        (pow(C2.dameTuReal(),2) + pow(C2.dameTuImaginario(),2))
    );

    cout<<endl<<"( ";
    C1.muestraTusDatos();
    cout<<" ) + ( ";
    C2.muestraTusDatos();
    cout<<" ) = ";
    C3.muestraTusDatos();

    cout<<endl<<"( ";
    C1.muestraTusDatos();
    cout<<" ) - ( ";
    C2.muestraTusDatos();
    cout<<" ) = ";
    C4.muestraTusDatos();

    cout<<endl<<"( ";
    C1.muestraTusDatos();
    cout<<" ) * ( ";
    C2.muestraTusDatos();
    cout<<" ) = ";
    C5.muestraTusDatos();

    cout<<endl<<"( ";
    C1.muestraTusDatos();
    cout<<" ) / ( ";
    C2.muestraTusDatos();
    cout<<" ) = ";
    C6.muestraTusDatos();

    return 0;
}
