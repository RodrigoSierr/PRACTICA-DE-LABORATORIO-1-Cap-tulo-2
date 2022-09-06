#include <iostream>
using namespace std;

int main(){
    int x{};
    int y{};

    cout <<"Ingrese el valor para x: "; cin >> x;
    cout <<"El valor de x es: "; cout << x  << endl;

    cout <<"Ingrese el valor para y: "; cin >> y;
    cout <<"El valor de y es: "; cout << y  << endl;

    int suma {x+y};

    cout <<"La suma de x y y es: "; cout << suma << endl;

    if (suma % 2 != 0)
        cout <<"La suma es impar";
    else
        cout <<"La suma es par";
    

    return 0;
}




