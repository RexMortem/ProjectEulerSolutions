/* 
    Must review for more optimised solution; it works but doesn't seem efficient
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    int i = 0;
    int smallestMultiple = 0;

    int n = 0;

    cin >> n;
    n += 1;

    while (smallestMultiple == 0){
        i += 2;
        
        char isMultiple = 1;

        for (int d = 3; d < n; d++){
            if (!(i % d == 0)){
                isMultiple = 0;
                break;
            }
        }

        if (isMultiple == 1){
            smallestMultiple = i;
        }
    }

    cout << i << "\n";
}
