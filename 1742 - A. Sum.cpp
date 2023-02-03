#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c, t, i;
    cin >> t;
    int result[t];
    for(i=0; i<t; i++){
        cin >> a >> b >> c;
        if(a+b==c || b+c==a || a+c==b){
            result[i] = 1;
        }
        else{
            result[i] = 0;
        }
    }
    for(i=0; i<t; i++){
        if(result[i]==1){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}
