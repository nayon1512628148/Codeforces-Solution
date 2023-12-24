#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t, n, x, y, i, j, positiveX, positiveY, negativeX, negativeY;
    cin >> t;
    for(i=0; i<t; i++){
        cin >> n;
        positiveX=0, positiveY=0, negativeX=0, negativeY=0;
        for(j=0; j<n; j++){
            cin >> x >> y;
            if(x>0){
                positiveX = 1;
            }
            if(x<0){
                negativeX = 1;
            }
            if(y>0){
                positiveY = 1;
            }
            if(y<0){
                negativeY = 1;
            }
        }
        if(positiveX==1 && positiveY==1 && negativeX==1 && negativeY==1){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
    return 0;
}
