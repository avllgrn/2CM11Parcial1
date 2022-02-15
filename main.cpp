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

//Codifica un programa que calcule si un punto en un plano cartesiano
//se encuentra en uno de los cuadrantes, sobre uno de los ejes
//o en el origen
int main(void){
    Punto P;

    //1. Pide datos
    cout<<endl<<"Ingresa las coordenadas de P"<<endl;
    P.pideleAlUsuarioTusDatos();

    //2. Calcula formula(s)
    if(P.dameTuX()>0 && P.dameTuY()>0){
        P.muestraTusDatos();
        cout<<" esta en el cuadrante I"<<endl;
    }
    else if(P.dameTuX()<0 && P.dameTuY()>0){
        P.muestraTusDatos();
        cout<<" esta en el cuadrante II"<<endl;
    }
    else if(P.dameTuX()<0 && P.dameTuY()<0){
        P.muestraTusDatos();
        cout<<" esta en el cuadrante III"<<endl;
    }
    else if(P.dameTuX()>0 && P.dameTuY()<0){
        P.muestraTusDatos();
        cout<<" esta en el cuadrante IV"<<endl;
    }
    else if(P.dameTuX()>0 && P.dameTuY()==0){
        P.muestraTusDatos();
        cout<<" esta en el eje X+"<<endl;
    }
    else if(P.dameTuX()==0 && P.dameTuY()>0){
        P.muestraTusDatos();
        cout<<" esta en el eje Y+"<<endl;
    }
    else if(P.dameTuX()<0 && P.dameTuY()==0){
        P.muestraTusDatos();
        cout<<" esta en el eje X-"<<endl;
    }
    else if(P.dameTuX()==0 && P.dameTuY()<0){
        P.muestraTusDatos();
        cout<<" esta en el eje Y-"<<endl;
    }
    else{
        P.muestraTusDatos();
        cout<<" esta en el o"<<endl;
    }

    return 0;
}
