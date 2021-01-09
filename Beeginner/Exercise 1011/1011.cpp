#include <bits/stdc++.h>
using namespace std;

int main(){
    double VOLUME, R, pi = 3.14159;
    cout << fixed << setprecision(3);

    cin >> R;

    VOLUME = (4/3.0) * pi * pow(R,3);

    cout << "VOLUME = " << VOLUME << endl;
return 0;
}
