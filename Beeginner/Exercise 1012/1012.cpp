#include <bits/stdc++.h>
using namespace std;

int main(){
    double A, B, C;
    double tri_retangulo, circulo, trapezio, quadrado, retangulo;
    cout << fixed << setprecision(3);

    cin >> A;
    cin >> B;
    cin >> C;

    //Triângulo Retângulo
    tri_retangulo = (A*C)/2;
    cout << "TRIANGULO: " << tri_retangulo << endl;

    //Circulo
    circulo = pow(C,2) * 3.14159;
    cout << "CIRCULO: " << circulo << endl;

    //Trapézio
    trapezio = (A+B)/2*C;
    cout << "TRAPEZIO: " << trapezio << endl;

    //Quadrado
    quadrado = pow(B, 2);
    cout << "QUADRADO: " << quadrado << endl;

    //Retângulo
    retangulo = A*B;
    cout << "RETANGULO: " << retangulo << endl;

return 0;
}
