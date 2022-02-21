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
//de un rectangulo representado por dos puntos en un plano
//cartesiano: P y Q son esquinas opuestas del rectangulo y
//su base y su altura siempre son paralelas a sus respectivos ejes

float calculaBase(Punto P, Punto Q);
float calculaAltura(Punto P, Punto Q);
float calculaArea(Punto P, Punto Q);
float calculaPerimetro(Punto P, Punto Q);

int main(void){
    Punto P, Q;

    //1. Pide datos
    cout<<endl<<"Ingresa las coordenadas de P"<<endl;
    P.pideleAlUsuarioTusDatos();
    cout<<endl<<"Ingresa las coordenadas de Q"<<endl;
    Q.pideleAlUsuarioTusDatos();

    if(P.dameTuX() != Q.dameTuX()
       &&
       P.dameTuY() != Q.dameTuY()
    ){
        //2. Calcula formula(s)
        //3. Muestra resultado(s)
        cout<<endl
            <<"Base = "<<calculaBase(P,Q)<<endl
            <<"Altura = "<<calculaAltura(P,Q)<<endl
            <<"Area = "<<calculaArea(P,Q)<<endl
            <<"Perimetro = "<<calculaPerimetro(P,Q)<<endl;
    }
    else
        cout<<endl<<"Error! Datos ingresados son de una recta..."<<endl;

    return 0;
}



float calculaBase(Punto P, Punto Q){
    return fabs(Q.dameTuX()-P.dameTuX());
}

float calculaAltura(Punto P, Punto Q){
    return fabs(Q.dameTuY()-P.dameTuY());
}

float calculaArea(Punto P, Punto Q){
    return calculaBase(P,Q) * calculaAltura(P,Q);
}

float calculaPerimetro(Punto P, Punto Q){
    return 2*calculaBase(P,Q) + 2*calculaAltura(P,Q);
}




