#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, p, q, i, level, yes=1;
    cin >> n;
    int total[n+1] = {0};
    cin >> p;
    for(i=0; i<p; i++){
        cin >> level;
        total[level] = 1;
    }
    cin >> q;
    for(i=1; i<=q; i++){
        cin >> level;
        total[level] = 1;
    }
    for(i=1; i<=n; i++){
        if(total[i]==0){
            cout << "Oh, my keyboard!" << endl;
            yes= 0;
            break;
        }
    }
    if(yes==1){
        cout << "I become the guy." << endl;
    }
    return 0;
}
