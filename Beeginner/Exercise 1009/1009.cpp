#include <bits/stdc++.h>
using namespace std;

int main(){
    string nome;
    double salario, vendas_mensal;

    cout << fixed << setprecision(2);
    cin >> nome;
    fflush(stdin);
    cin >> salario;
    cin >> vendas_mensal;

    salario += vendas_mensal * 0.15;

    cout << "TOTAL = R$ " << salario << endl;
return 0;
}
