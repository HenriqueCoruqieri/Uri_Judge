#include <bits/stdc++.h>
using namespace std;

int main(){
    int peca1, num_peca1, peca2, num_peca2;
    double valor_peca1, valor_peca2, valor_pg;
    cout << fixed << setprecision(2);

    //Inserir dados da Peça 1
    cin >> peca1;
    cin >> num_peca1;
    cin >> valor_peca1;

    valor_peca1 *= num_peca1;

    //Inserir dados da Peça 2
    cin >> peca2;
    cin >> num_peca2;
    cin >> valor_peca2;

    valor_peca2 *= num_peca2;

    //Total
    valor_pg = valor_peca1 + valor_peca2;

    cout << "VALOR A PAGAR: R$ " << valor_pg << endl;

return 0;
}
