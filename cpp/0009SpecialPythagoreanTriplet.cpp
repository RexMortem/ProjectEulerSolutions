#include <bits/stdc++.h>

using namespace std;

int main(){
    int sumTo = 0;
    cin >> sumTo;

    int divided = sumTo/3; // minimum combination is divided - 1, divided, divided + 1; sums to 3divided which is never bigger than sumTo

    for (int a = 1; a < divided; a++){
        for (int b = divided; b < (2 * divided); b++){
            int c = sumTo - a - b;
            
            if (c > b){
                if(a*a + b*b == c*c){
                    cout << "a: " << a << "\n";
                    cout << "b: " << b << "\n";
                    cout << "c: " << c << "\n";
                    
                    cout << a * b * c << "\n";
                    return 0;
                }
            }
        }
    }
}
