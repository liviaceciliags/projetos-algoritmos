#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
 
int main() {
 
    float A, B, C;
    double pi, TRIANGULO, CIRCULO, TRAPEZIO, QUADRADO, RETANGULO;
    
    pi = 3.14159;
    
    cin >> fixed >> setprecision(1) >> A >> B >> C;
    
    TRIANGULO = A*C/2;
    CIRCULO = pow(C,2)*pi;
    TRAPEZIO = (A+B)*C/2;
    QUADRADO = B*B;
    RETANGULO = A*B;
    
    
    cout << fixed << setprecision(3);
    cout <<"TRIANGULO: "<< TRIANGULO << endl;
    cout <<"CIRCULO: "<< CIRCULO << endl;
    cout <<"TRAPEZIO: "<< TRAPEZIO << endl;
    cout <<"QUADRADO: "<< QUADRADO << endl;
    cout <<"RETANGULO: "<< RETANGULO << endl;

    return 0;
}