#include <bits/stdc++.h>
using namespace std;
int main(){
    int upp=0, low=0, i, l;
    string st;
    cin >> ws;
    getline(cin, st);
    l = st.size();
    for(i=0; i<l; i++){
        if(st[i]>='a' && st[i]<='z'){
            low++;
        }
        else{
            upp++;
        }
    }
    if(upp>low){
        for(i=0; i<l; i++){
            st[i] = toupper(st[i]);
        }
    }
    else{
        for(i=0; i<l; i++){
            st[i] = tolower(st[i]);
        }
    }
    for(i=0; i<l; i++){
            cout << st[i];
    }
    return 0;
}
