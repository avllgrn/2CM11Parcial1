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

int main(void){
    Natural A;
    int iA;
    string sA;

    iA = A.dameTuIValor();
    sA = A.dameTuSValor();

    cout<<" A = ";
    A.muestraTusDatos();
    cout<<endl;
    cout<<"iA = "<<iA<<endl
        <<"sA = "<<sA<<endl<<endl;
    system("pause");
    system("cls");

    Natural B(1);
    int iB;
    string sB;

    iB = B.dameTuIValor();
    sB = B.dameTuSValor();

    cout<<" B = ";
    B.muestraTusDatos();
    cout<<endl;
    cout<<"iB = "<<iB<<endl
        <<"sB = "<<sB<<endl<<endl;
    system("pause");
    system("cls");

    Natural C(-2);
    int iC;
    string sC;

    iC = C.dameTuIValor();
    sC = C.dameTuSValor();

    cout<<" C = ";
    C.muestraTusDatos();
    cout<<endl;
    cout<<"iC = "<<iC<<endl
        <<"sC = "<<sC<<endl<<endl;
    system("pause");
    system("cls");

    Natural D("3");
    int iD;
    string sD;

    iD = D.dameTuIValor();
    sD = D.dameTuSValor();

    cout<<" D = ";
    D.muestraTusDatos();
    cout<<endl;
    cout<<"iD = "<<iD<<endl
        <<"sD = "<<sD<<endl<<endl;
    system("pause");
    system("cls");

    Natural E("-4");
    int iE;
    string sE;

    iE = E.dameTuIValor();
    sE = E.dameTuSValor();

    cout<<" E = ";
    E.muestraTusDatos();
    cout<<endl;
    cout<<"iE = "<<iE<<endl
        <<"sE = "<<sE<<endl<<endl;
    system("pause");
    system("cls");

    Natural F("CINCO");
    int iF;
    string sF;

    iF = F.dameTuIValor();
    sF = F.dameTuSValor();

    cout<<" F = ";
    F.muestraTusDatos();
    cout<<endl;
    cout<<"iF = "<<iF<<endl
        <<"sF = "<<sF<<endl<<endl;
    system("pause");
    system("cls");

    Natural G('6');
    int iG;
    string sG;

    iG = G.dameTuIValor();
    sG = G.dameTuSValor();

    cout<<" G = ";
    G.muestraTusDatos();
    cout<<endl;
    cout<<"iG = "<<iG<<endl
        <<"sG = "<<sG<<endl<<endl;
    system("pause");
    system("cls");

    Natural H('@');
    int iH;
    string sH;

    iH = H.dameTuIValor();
    sH = H.dameTuSValor();

    cout<<" H = ";
    H.muestraTusDatos();
    cout<<endl;
    cout<<"iH = "<<iH<<endl
        <<"sH = "<<sH<<endl<<endl;
    system("pause");
    system("cls");

    cout<<" A = ";
    A.muestraTusDatos();
    cout<<endl;
    cout<<"iA = "<<iA<<endl
        <<"sA = "<<sA<<endl<<endl;

    A.pideleAlUsuarioTusDatos();
    iA = A.dameTuIValor();
    sA = A.dameTuSValor();

    cout<<" A = ";
    A.muestraTusDatos();
    cout<<endl;
    cout<<"iA = "<<iA<<endl
        <<"sA = "<<sA<<endl<<endl;
    system("pause");
    system("cls");

    cout<<" B = ";
    B.muestraTusDatos();
    cout<<endl;
    cout<<"iB = "<<iB<<endl
        <<"sB = "<<sB<<endl<<endl;

    B.modificaTuIValor(8);
    iB = B.dameTuIValor();
    sB = B.dameTuSValor();

    cout<<" B = ";
    B.muestraTusDatos();
    cout<<endl;
    cout<<"iB = "<<iB<<endl
        <<"sB = "<<sB<<endl<<endl;
    system("pause");
    system("cls");

    cout<<" C = ";
    C.muestraTusDatos();
    cout<<endl;
    cout<<"iC = "<<iC<<endl
        <<"sC = "<<sC<<endl<<endl;

    C.modificaTuIValor('9');
    iC = C.dameTuIValor();
    sC = C.dameTuSValor();

    cout<<" C = ";
    C.muestraTusDatos();
    cout<<endl;
    cout<<"iC = "<<iC<<endl
        <<"sC = "<<sC<<endl<<endl;
    system("pause");
    system("cls");

    cout<<" D = ";
    D.muestraTusDatos();
    cout<<endl;
    cout<<"iD = "<<iD<<endl
        <<"sD = "<<sD<<endl<<endl;

    D.modificaTuIValor('@');
    iD = D.dameTuIValor();
    sD = D.dameTuSValor();

    cout<<" D = ";
    D.muestraTusDatos();
    cout<<endl;
    cout<<"iD = "<<iD<<endl
        <<"sD = "<<sD<<endl<<endl;
    system("pause");
    system("cls");

    cout<<" E = ";
    E.muestraTusDatos();
    cout<<endl;
    cout<<"iE = "<<iE<<endl
        <<"sE = "<<sE<<endl<<endl;

    E.modificaTuSValor("6");
    iE = E.dameTuIValor();
    sE = E.dameTuSValor();

    cout<<" E = ";
    E.muestraTusDatos();
    cout<<endl;
    cout<<"iE = "<<iE<<endl
        <<"sE = "<<sE<<endl<<endl;
    system("pause");
    system("cls");

    cout<<" F = ";
    F.muestraTusDatos();
    cout<<endl;
    cout<<"iF = "<<iF<<endl
        <<"sF = "<<sF<<endl<<endl;

    F.modificaTuSValor("66");
    iF = F.dameTuIValor();
    sF = F.dameTuSValor();

    cout<<" F = ";
    F.muestraTusDatos();
    cout<<endl;
    cout<<"iF = "<<iF<<endl
        <<"sF = "<<sF<<endl<<endl;
    system("pause");
    system("cls");

    cout<<" G = ";
    G.muestraTusDatos();
    cout<<endl;
    cout<<"iG = "<<iG<<endl
        <<"sG = "<<sG<<endl<<endl;

    G.modificaTuSValor("sesenta y siete");
    iG = G.dameTuIValor();
    sG = G.dameTuSValor();

    cout<<" G = ";
    G.muestraTusDatos();
    cout<<endl;
    cout<<"iG = "<<iG<<endl
        <<"sG = "<<sG<<endl<<endl;
    system("pause");
    system("cls");

    cout<<" H = ";
    H.muestraTusDatos();
    cout<<endl;
    cout<<"iH = "<<iH<<endl
        <<"sH = "<<sH<<endl<<endl;
    cout<<" A = ";
    A.muestraTusDatos();
    cout<<endl;
    cout<<"iA = "<<iA<<endl
        <<"sA = "<<sA<<endl<<endl;
    cout<<" B = ";
    B.muestraTusDatos();
    cout<<endl;
    cout<<"iB = "<<iB<<endl
        <<"sB = "<<sB<<endl<<endl;

    H.modificaTuIValor(A.dameTuIValor()+B.dameTuIValor());
    iH = H.dameTuIValor();
    sH = H.dameTuSValor();

    cout<<" H = A+B = ";
    H.muestraTusDatos();
    cout<<endl;
    cout<<"iH = "<<iH<<endl
        <<"sH = "<<sH<<endl<<endl;
    system("pause");
    system("cls");

    cout<<" E = ";
    E.muestraTusDatos();
    cout<<endl;
    cout<<"iE = "<<iE<<endl
        <<"sE = "<<sE<<endl<<endl;
    cout<<" C = ";
    C.muestraTusDatos();
    cout<<endl;
    cout<<"iC = "<<iC<<endl
        <<"sC = "<<sC<<endl<<endl;
    cout<<" D = ";
    D.muestraTusDatos();
    cout<<endl;
    cout<<"iD = "<<iD<<endl
        <<"sD = "<<sD<<endl<<endl;

    E.modificaTuSValor(C.dameTuSValor()+D.dameTuSValor());
    iE = E.dameTuIValor();
    sE = E.dameTuSValor();

    cout<<" E = C+D = ";
    E.muestraTusDatos();
    cout<<endl;
    cout<<"iE = "<<iE<<endl
        <<"sE = "<<sE<<endl<<endl;

    return 0;
}
