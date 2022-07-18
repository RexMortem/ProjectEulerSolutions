/*
    Heard from advice that VLA is bad since it's a compiler feature
    I should instead learn the "vector" data-type and look more into VLA in cpp and its equivalents
    Note that this approach is superior to checking every prime for every number
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    char Numbers[2000000] = {};
    long long int sum = 0;
    int i = 2;

    while (i < 2000000){
        if (!Numbers[i]){
            // must be prime 
            sum += i;

            int d = i;

            while (d < 2000000){
                Numbers[d] = 1;
                d += i;
            }
        }

        i++;
    }

    cout << sum << "\n";
}
