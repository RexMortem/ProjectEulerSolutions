#include <bits/stdc++.h>

using namespace std;

int main(){
    int limit = 0;
    
    cin >> limit; 

    int sum = 0;
    int previous = 1; 
    int i = 2;

    while (i < limit){
        if (i % 2 == 0){
            sum += i;
        }

        int temp = previous;
        previous = i;
        i = i + temp;

    }

    cout << sum << "\n";
}
