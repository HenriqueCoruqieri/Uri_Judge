#include <bits/stdc++.h>
using namespace std;

int main(){
    int num_funcionario ,hrs_trabalhadas;
    double salario;
    cout << fixed << setprecision(2);

    cin >> num_funcionario;
    cin >> hrs_trabalhadas;
    cin >> salario;

    salario *= hrs_trabalhadas;

    cout << "NUMBER = " << num_funcionario << endl;
    cout << "SALARY = U$ " << salario << endl;

return 0;
}
