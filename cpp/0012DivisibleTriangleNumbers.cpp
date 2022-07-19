#include <bits/stdc++.h>

using namespace std;

int main(){
    int n = 0;
    cin >> n;

    int divisors = 0;
    int i = 1;
    int tri = 1;

    while (divisors <= n){
        i++;
        tri += i;

        divisors = 0;

        for (int d = 1; d <= sqrt(tri); d++){
            if (tri % d == 0){
                divisors += 2;
            }
        }
    }

    cout << tri << "\n";
}
