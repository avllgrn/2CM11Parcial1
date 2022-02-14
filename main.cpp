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

//Codifica un programa que calcule el area y el perimetro
//de un circulo representado por dos puntos en un plano
//cartesiano: C es el centro del circulo y P es un punto
//sobre su circunferencia
int main(void){
    Punto C, P;
    float radio, area, perimetro;

    cout<<endl<<"Ingresa las coordenadas de C"<<endl;
    C.pideleAlUsuarioTusDatos();
    cout<<endl<<"Ingresa las coordenadas de P"<<endl;
    P.pideleAlUsuarioTusDatos();

    radio = sqrt(
                pow(P.dameTuX()-C.dameTuX(),2)
                +
                pow(P.dameTuY()-C.dameTuY(),2)
            );
    area = M_PI * pow(radio,2);
    perimetro = 2*M_PI*radio;

    cout<<endl
        <<"Area = "<<area<<endl
        <<"Radio = "<<radio<<endl
        <<"Perimetro = "<<perimetro<<endl;

    return 0;
}
