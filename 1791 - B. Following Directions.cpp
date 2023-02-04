#include <bits/stdc++.h>
using namespace std;
int main(){
    int num, t, i, j, n, x=0, y=0;
    cin >> num;
    int result[num]={0};
    string st;
    for(i=0; i<num; i++){
        cin >> n;
        cin >> ws;
        getline(cin, st);
        for(j=0; j<n; j++){
            if(st[j]=='R'){
                x = x+1;
            }
            else if(st[j]=='L'){
                x = x-1;
            }
            else if(st[j]=='U'){
                y = y+1;
            }
            else{
                y = y-1;
            }
            if(x==1 && y==1){
                result[i] = 1;
                break;
            }
            else{
                result[i] = 0;
            }
        }
        x=0;
        y=0;
    }
    for(i=0; i<num; i++){
        if(result[i]==1){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}
