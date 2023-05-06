#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, i, j, length, first, second, yes;
    string st;
    cin >> t;
    for(i=1; i<=t; i++){
        cin >> ws;
        cin >> st;
        length = st.size();
        if(length%2!=0){
            cout << "NO" << endl;
        }
        else{
            yes=1;
            first = 0;
            second = length/2;
            for(j=1; j<=length/2; j++){
                if(st[first]!=st[second]){
                    cout << "NO" << endl;
                    yes = 0;
                    break;
                }
                first++;
                second++;
            }
            if(yes==1){
                cout << "YES" << endl;
            }
        }
    }
    return 0;
}
