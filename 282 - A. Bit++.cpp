#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, i, l, x=0;
    string st;
    cin >> n;
    for(i=0; i<n; i++){
        cin >> ws;
        getline(cin, st);
        l = st.size();
        if(st[0]=='+' || st[l-1]=='+'){
            x = x+1;
        }
        else{
            x = x-1;
        }
    }
    cout << x << endl;
    return 0;
}
