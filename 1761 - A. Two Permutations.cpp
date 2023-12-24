#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t, a, b, n, i;
    cin >> t;
    for(i=0; i<t; i++){
        cin >> n >> a >> b;
        if(a+b<=n-2 || (a==n && b==n)){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
    return 0;
}
