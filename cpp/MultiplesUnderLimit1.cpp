#include <bits/stdc++.h>

using namespace std;

/*
    A more efficient solution might be summing multiples of 3 and multiples of 5 under the limit 
    This is because we can write them as summations 

    For example, multiples of 3 can generally be written as 3 * n/2(n + 1) 
    We could say that n is the floor of limit/3 

    Multiples of 5 can be generated similarly
    Then, subtract multiples of 15 since that's the overlap of 5 and 3 so it would be counted twice 

    The following function mathematicalSum is inspired by the ProjectEuler overview
*/

int mathematicalSum(int limit){
    // must be floats to allow for n/2 without it just resolving to an integer
    limit -= 1; // this is because the limit is not inclusive (so we just take 1 since they're integers so it's fine)

    float nFor3 = int(limit/3);
    float nFor5 = int(limit/5);
    float nFor15 = int(limit/15);

    int resultFor3 = 3 * (nFor3/2) * (nFor3 + 1);
    int resultFor5 = 5 * (nFor5/2) * (nFor5 + 1);
    int resultFor15 = 15 * (nFor15/2) * (nFor15 + 1);
    
    return resultFor3 + resultFor5 - resultFor15;
}

int main(){
    int limit = 0;
    int sum = 0;

    cin >> limit; 

    int i = 1;
    int a = 5;
    int b = 3;

    while (i < limit){
        if ((i % 3 == 0) || (i % 5 == 0)){
            sum += i;
        }

        i++;
    }
    
    cout << sum << "\n";
    cout << mathematicalSum(limit) << "\n";
}
