#include <bits/stdc++.h>
using namespace std;
int main(){
    int i, n, a=0, d=0;
    string st;
    cin >> n;
    cin >> ws;
    getline(cin, st);
    for(i=0; i<n; i++){
        if(st[i]=='A'){
            a++;
        }
        else{
            d++;
        }
    }
    if(a==d){
        cout << "Friendship\n";
    }
    else if(a>d){
        cout << "Anton\n";
    }
    else{
        cout << "Danik\n";
    }
    return 0;
}
