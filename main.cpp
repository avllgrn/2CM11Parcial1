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
int main(void){
    //Codifica un programa que sume dos puntos en un plano cartesiano

    Punto A, B, C;
    Punto *APtr, *BPtr, *CPtr;

    APtr=&A;
    BPtr=&B;
    CPtr=&C;

    cout<<endl<<"Ingresa las coordenadas de A"<<endl;
    APtr->pideleAlUsuarioTusDatos();

    cout<<endl<<"Ingresa las coordenadas de B"<<endl;
    BPtr->pideleAlUsuarioTusDatos();

    CPtr->modificaTuX( APtr->dameTuX() + BPtr->dameTuX() );
    CPtr->modificaTuY( APtr->dameTuY() + BPtr->dameTuY() );

    cout<<endl<<"  A";
    APtr->muestraTusDatos();
    cout<<endl<<"+ B";
    BPtr->muestraTusDatos();
    cout<<endl<<"= C";
    CPtr->muestraTusDatos();

    return 0;
}
