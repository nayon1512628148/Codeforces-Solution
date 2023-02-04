#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, i;
    char ch;
    cin >> n;
    int result[n];
    for(i=0; i<n; i++){
        cin >> ch;
        if(ch=='c' || ch=='o' || ch=='d' || ch=='e' || ch=='f' || ch=='r' || ch=='s'){
            result[i] = 1;
        }
        else{
            result[i] = 0;
        }
    }
    for(i=0; i<n; i++){
        if(result[i]==1){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}
