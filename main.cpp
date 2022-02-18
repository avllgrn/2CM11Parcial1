#include <iostream>
#include <stdlib.h>
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

Punto suma(Punto P, Punto Q);
Punto resta(Punto P, Punto Q);
float pendienteDados(Punto P, Punto Q);
float distanciaEntre(Punto P, Punto Q);
int calculaCuadrante(Punto P);

int menu(void);
void ejecutaOpcion(int n);
void suma(void);
void resta(void);
void calculaPendiente(void);
void calculaDistancia(void);
void calculaCuadrante(void);


int main(void){
    while(menu()!=6);
    return 0;
}

Punto suma(Punto P, Punto Q){
    Punto R;
    R.modificaTuX(P.dameTuX()+Q.dameTuX());
    R.modificaTuY(P.dameTuY()+Q.dameTuY());
    return R;
}
Punto resta(Punto P, Punto Q){
    Punto R;
    R.modificaTuX(P.dameTuX()-Q.dameTuX());
    R.modificaTuY(P.dameTuY()-Q.dameTuY());
    return R;
}
float pendienteDados(Punto P, Punto Q){
    return (Q.dameTuY()-P.dameTuY()) / (Q.dameTuX()-P.dameTuX());
}
float distanciaEntre(Punto P, Punto Q){
    return sqrt(
            pow(P.dameTuX()-Q.dameTuX(), 2)
            +
            pow(P.dameTuY()-Q.dameTuY() ,2)
            );
}
int calculaCuadrante(Punto P){
    //2. Calcula formula(s)
    if(P.dameTuX()>0 && P.dameTuY()>0)
        return 1;
    else if(P.dameTuX()<0 && P.dameTuY()>0)
        return 2;
    else if(P.dameTuX()<0 && P.dameTuY()<0)
        return 3;
    else if(P.dameTuX()>0 && P.dameTuY()<0)
        return 4;
    else if(P.dameTuX()>0 && P.dameTuY()==0)
        return 5;
    else if(P.dameTuX()==0 && P.dameTuY()>0)
        return 6;
    else if(P.dameTuX()<0 && P.dameTuY()==0)
        return 7;
    else if(P.dameTuX()==0 && P.dameTuY()<0)
        return 8;
    else
        return 0;
}

int menu(void){
    int n;
    cout<<"1. Suma de dos puntos"<<endl;
    cout<<"2. Resta de dos puntos"<<endl;
    cout<<"3. Pendiente dados dos puntos"<<endl;
    cout<<"4. Distancia entre dos puntos"<<endl;
    cout<<"5. Cuadrante de un punto"<<endl;
    cout<<"6. Salir"<<endl;
    cout<<"Cual es tu opcion ?"<<endl;
    cin>>n;
    system("cls");
    ejecutaOpcion(n);
    return n;
}
void ejecutaOpcion(int n){
    switch(n){
        case 1:
            suma();
            break;
        case 2:
            resta();
            break;
        case 3:
            calculaPendiente();
            break;
        case 4:
            calculaDistancia();
            break;
        case 5:
            calculaCuadrante();
            break;
        case 6:
            cout<<"Adios! =)"<<endl;
            break;
        default:
            cout<<"Opcion invalida... =("<<endl;
            break;
    }
    cout<<endl<<endl;
    system("pause");
    system("cls");
}
void suma(void){
    Punto A, B, C;

    cout<<endl<<"Dame las coordenadas de A "<<endl;
    A.pideleAlUsuarioTusDatos();

    cout<<endl<<"Dame las coordenadas de B "<<endl;
    B.pideleAlUsuarioTusDatos();

    C = suma(A,B);

    cout<<endl<<"  A";
    A.muestraTusDatos();
    cout<<endl<<"+ B";
    B.muestraTusDatos();
    cout<<endl<<"= C";
    C.muestraTusDatos();
}
void resta(void){
    Punto A, B, C;

    cout<<endl<<"Dame las coordenadas de A "<<endl;
    A.pideleAlUsuarioTusDatos();

    cout<<endl<<"Dame las coordenadas de B "<<endl;
    B.pideleAlUsuarioTusDatos();

    C = resta(A,B);

    cout<<endl<<"  A";
    A.muestraTusDatos();
    cout<<endl<<"- B";
    B.muestraTusDatos();
    cout<<endl<<"= C";
    C.muestraTusDatos();
}
void calculaPendiente(void){
    Punto P1, P2;
    float m;

    cout<<endl<<"Ingresa las coordenadas de P1"<<endl;
    P1.pideleAlUsuarioTusDatos();
    cout<<endl<<"Ingresa las coordenadas de P2"<<endl;
    P2.pideleAlUsuarioTusDatos();

    m = pendienteDados(P1,P2);

    cout<<endl<<"m = "<<m<<endl;
}
void calculaDistancia(void){
    Punto P, Q;
    float d;

    cout<<endl<<"Ingresa las coordenadas de P"<<endl;
    P.pideleAlUsuarioTusDatos();
    cout<<endl<<"Ingresa las coordenadas de Q"<<endl;
    Q.pideleAlUsuarioTusDatos();

    d = distanciaEntre(P,Q);

    cout<<endl<<"d = "<<d<<endl;
}
void calculaCuadrante(void){
    Punto P;
    int cuadrante;

    cout<<endl<<"Ingresa las coordenadas de P"<<endl;
    P.pideleAlUsuarioTusDatos();

    cuadrante = calculaCuadrante(P);

    if(cuadrante==1){
        P.muestraTusDatos();
        cout<<" esta en el cuadrante I"<<endl;
    }
    else if(cuadrante==2){
        P.muestraTusDatos();
        cout<<" esta en el cuadrante II"<<endl;
    }
    else if(cuadrante==3){
        P.muestraTusDatos();
        cout<<" esta en el cuadrante III"<<endl;
    }
    else if(cuadrante==4){
        P.muestraTusDatos();
        cout<<" esta en el cuadrante IV"<<endl;
    }
    else if(cuadrante==5){
        P.muestraTusDatos();
        cout<<" esta en el eje X+"<<endl;
    }
    else if(cuadrante==6){
        P.muestraTusDatos();
        cout<<" esta en el eje Y+"<<endl;
    }
    else if(cuadrante==7){
        P.muestraTusDatos();
        cout<<" esta en el eje X-"<<endl;
    }
    else if(cuadrante==8){
        P.muestraTusDatos();
        cout<<" esta en el eje Y-"<<endl;
    }
    else{
        P.muestraTusDatos();
        cout<<" esta en el origen"<<endl;
    }
}
