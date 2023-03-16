#include <bits/stdc++.h>
using namespace std;
int main(){
    int i, l, one=0, two=0, three=0;
    string st;
    cin >> ws;
    getline(cin, st);
    l = st.size();
    for(i=0; i<l; i++){
        if(st[i]=='1'){
            one++;
        }
        else if(st[i]=='2'){
            two++;
        }
        else if (st[i]=='3'){
            three++;
        }

    }
    if(one>0){
        for(i=0; i<one-1; i++){
            cout << "1+";
        }
        cout << "1";
    }
    if(two>0){
        if(one>0){
            cout << "+";
        }
        for(i=0; i<two-1; i++){
            cout << "2+";
        }
        cout << "2";
    }
    if(three>0){
        if(one>0 || two>0){
            cout << "+";
        }
        for(i=0; i<three-1; i++){
            cout << "3+";
        }
        cout << "3";
    }
    return 0;
}
