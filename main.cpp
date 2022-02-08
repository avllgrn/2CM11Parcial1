#include <iostream>
using namespace std;

int main(void){
    int a, b, c;

    cout << "Ingresa un numero ";
    cin >> a;

    cout << "Ingresa otro numero ";
    cin >> b;

    c = a+b;

    cout << "a = " << a << endl
         << "b = " << b << endl
         << "c = " << c << endl;

    return 0;
}
