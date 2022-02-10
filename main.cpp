#include <iostream>
using namespace std;

struct Punto{
    double x;
    double y;
};
int main(void){
    //Codifica un programa que sume dos puntos en un plano cartesiano

    struct Punto A, B, C;

    cout<<"Dame las coordenadas de A ";
    cin>>A.x>>A.y;
    cout<<"Dame las coordenadas de B ";
    cin>>B.x>>B.y;

    C.x = A.x + B.x;
    C.y = A.y + B.y;

    cout<<"("<<C.x<<","<<C.y<<")"<<endl;

    return 0;
}
