#include <iostream>
#include <stdlib.h>
#include <sstream>
#include <fstream>
using namespace std;

class Natural{
private:
    int iValor;
    string sValor;
    void verificaSValor(void){
        stringstream ss;
        this->iValor = abs(atoi(this->sValor.c_str()));
        ss << this->iValor;
        ss >> this->sValor;
    };
public:
    Natural(void){
        this->iValor = 0;
        this->sValor = "0";
        //cout << "Objeto construido, this -> " << this << endl;
    };
    Natural(int iValor){
        stringstream ss;
        this->iValor = abs(iValor);
        ss << this->iValor;
        ss >> this->sValor;
        //cout << "Objeto construido, this -> " << this << endl;
    };
    Natural(string sValor){
        this->sValor = sValor;
        this->verificaSValor();
        //cout << "Objeto construido, this -> " << this << endl;
    };
    Natural(char cValor){
        stringstream ss;
        if(cValor<48||cValor>57){
            iValor = (int) cValor;
            ss << this->iValor;
            ss >> this->sValor;
        }
        else{
            ss << cValor;
            ss >> this->sValor;
            iValor = atoi(sValor.c_str());
        }
        //cout << "Objeto construido, this -> " << this << endl;
    };
    ~Natural(void){
        //cout << "Objeto destruido, this -> " << this << endl;
    };
    void pideleAlUsuarioTusDatos(void){
        cout<<"Dame mi iValor ";
        cin>>this->sValor;
        this->verificaSValor();
    };
    void muestraTusDatos(void){
        cout << this->iValor;
    };
    void guardaTusDatos(ofstream& ASalida) {
        ASalida << this->iValor;
    };
    void cargaTusDatos(ifstream& AEntrada) {
        AEntrada >> sValor;
        this->verificaSValor();
    };
    int dameTuIValor(void){
        return this->iValor;
    };
    void modificaTuIValor(int iValor){
        stringstream ss;
        this->iValor = abs(iValor);
        ss << this->iValor;
        ss >> this->sValor;
    };
    void modificaTuIValor(char cValor){
        stringstream ss;
        if(cValor<48||cValor>57){
            iValor = (int) cValor;
            ss << this->iValor;
            ss >> this->sValor;
        }
        else{
            ss << cValor;
            ss >> this->sValor;
            iValor = atoi(sValor.c_str());
        }
        //cout << "Objeto construido, this -> " << this << endl;
    };
    string dameTuSValor(void){
        return this->sValor;
    }
    void modificaTuSValor(string sValor){
        this->sValor = sValor;
        this->verificaSValor();
    };
};

//  Direccion   !=  Dato

int main(void){

    Natural a;      //Instancia de la clase punto
    Natural*ptr;    //Apuntador que guarda una direccion

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
