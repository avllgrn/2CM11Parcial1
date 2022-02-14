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
    Punto P, Q;
    float base, altura, area, perimetro;

    //1. Pide datos
    cout<<endl<<"Ingresa las coordenadas de P"<<endl;
    P.pideleAlUsuarioTusDatos();
    cout<<endl<<"Ingresa las coordenadas de Q"<<endl;
    Q.pideleAlUsuarioTusDatos();

    if(P.dameTuX() != Q.dameTuX()
       &&
       Q.dameTuY() != Q.dameTuY()
    ){
        //2. Calcula formula(s)
        base = fabs(Q.dameTuX()-P.dameTuX());
        altura = fabs(Q.dameTuY()-P.dameTuY());
        area = base*altura;
        perimetro = 2*base + 2*altura;

        //3. Muestra resultado(s)
        cout<<endl
            <<"Base = "<<base<<endl
            <<"Altura = "<<altura<<endl
            <<"Area = "<<area<<endl
            <<"Perimetro = "<<perimetro<<endl;
    }
    else
        cout<<endl<<"Error! Datos ingresados son de una recta..."<<endl;

    return 0;
}
