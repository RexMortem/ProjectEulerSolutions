/*
  Done this problem twice; pretty sure this solution is better.
  Previous solution used sieve method but that includes checking whether every single number is a prime 
  versus this checking whether only those which are factors are prime (even without the sieve structure, should be faster to check)
  
  a ton of prime checks vs a handful of expensive prime checks
*/

#include <bits/stdc++.h>

using namespace std;

char isPrime(int n){
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0){
            return 0;
        }
    }

    return 1;
}

int main(){
    long long int n = 0;
    cin >> n;

    int largestPrimeFactor = 1;

    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0){
            if (isPrime(i) == 1){
                largestPrimeFactor = i;
            }
        }
    }

    cout << largestPrimeFactor << "\n";
}
