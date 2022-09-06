#include <iostream>
using namespace std;

int main() {

    int a;
    int e;
    int i;
    int o;
    int u;

    cout <<"Ingrese un valor: ";
    cin >>a;
    cout <<"Ingrese un valor: ";
    cin >>e;
    cout <<"Ingrese un valor: ";
    cin >>i;
    cout <<"Ingrese un valor: ";
    cin >>o;
    cout <<"Ingrese un valor: ";
    cin >>u;

    if (a > e > i > o > u){
        cout <<"Es el valor mas alto: " << a << endl;
    } else if  (e > a > i > o > u){
        cout <<"Es el valor mas alto: " << e << endl;
    } else (i > a > e > o > u);
        cout <<"Es el valor mas alto: " << i << endl;

    return 0;
}