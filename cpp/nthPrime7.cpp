#include <bits/stdc++.h>

using namespace std;

int main(){
    int cI = 2;

    int n = 0;

    cin >> n;
    cout << "n is: " << n << "\n";

    
    int Primes[n] = {2, 3};

    int i = 3;

    while (cI < n){
        i += 1;
        char Prime = 1;

        for (int d = 0; d < cI; d++){
            if ((i % Primes[d]) == 0){
                Prime = 0;
                break;
            }
        }

        if (Prime == 1){
            Primes[cI] = i;
            cI += 1;
        }
    }
    cout << "Primes: " << "\n";
    cout << Primes[cI - 1] << "\n";
}
