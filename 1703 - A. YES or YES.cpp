#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, i;
    string s;
    cin >> t;
    int result[t];
    for(i=0; i<t; i++){
        cin >> ws;
        getline(cin, s);
        if(s=="YES" || s=="Yes" || s=="yEs" || s=="yeS" || s=="YEs" || s=="yES" || s=="YeS" || s=="yes"){
            result[i] = 1;
        }
        else{
            result[i] =0;
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
