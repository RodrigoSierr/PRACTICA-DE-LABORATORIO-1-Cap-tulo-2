#include <iostream>
using namespace std;

int main(){
    int pi = 3.14159;
    int radio{};
    cout<<"Ponga valor a el RADIO: "; 
    cin >> radio;
    cout << "Valor de diametro: ";cout<<radio*radio<<endl;
    cout <<"Valor de circunferencia: ";cout<<2*pi*radio<<endl;
    cout<<"El area es: ";cout<<pi*(radio*radio)<<endl;

    return 0;
}
