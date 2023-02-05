#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, i, l;
    string st;
    cin >> n;
    for(i=0; i<n; i++){
        cin >> ws;
        getline(cin, st);
        l = st.size();
        if(l>10){
            cout << st[0] << l-2 << st[l-1] << endl;
        }
        else{
            cout << st << endl;
        }
    }
    return 0;
}
