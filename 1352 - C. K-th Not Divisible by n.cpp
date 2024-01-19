#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll int t, n, k, s, p, result, i;
    cin >> t;
    for(i=0; i<t; i++){
        cin >> n >> k;
        result = k + floor((k - 1) / (n - 1)); //Formula for find the Kth number which is not divisible by N
        cout << result << endl;
    }
    return 0;
}
