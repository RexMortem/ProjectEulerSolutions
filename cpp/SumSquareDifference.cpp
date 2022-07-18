#include <bits/stdc++.h>

using namespace std;

int main(){
    int n = 0;
    cin >> n;

    int SumOfSquares = 0;
    int Sum = 0;

    for (int i = 1; i <= n; i++){
        Sum += i;
        SumOfSquares += (i*i);
    }

    cout << (Sum*Sum) - SumOfSquares << "\n";
}
