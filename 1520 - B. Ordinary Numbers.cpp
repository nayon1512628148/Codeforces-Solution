#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int t, i, j, k, n, sum=0, r;
    cin >> t;
    for(i=1; i<=t; i++){
        cin >> n;
        for(j=1; j<=9; j++){
            for(k=j; k<=n; k++){
                k = k*10+j-1;
                sum++;
            }
        }
        cout << sum << endl;
        sum = 0;
    }
    return 0;
}
