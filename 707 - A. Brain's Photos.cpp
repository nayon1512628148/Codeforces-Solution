#include <bits/stdc++.h>
using namespace std;
int main(){
    int m, n, i, j, color=0;
    char ch;
    cin >> m >> n;
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            cin >> ws;
            cin >> ch;
            if(ch=='C' || ch=='M' || ch=='Y'){
                color=1;
            }
        }
    }
    if(color==1){
        cout << "#Color";
    }
    else{
        cout << "#Black&White";
    }
    return 0;
}
