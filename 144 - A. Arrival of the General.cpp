#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, i, ma, mi, maIndex=1, miIndex=1, sum=0;
    cin >> n;
    int num[n+1];
    for(i=1; i<=n; i++){
        cin >> num[i];
    }
    ma = num[1];
    mi = num[1];
    for(i=1; i<=n; i++){
        if(num[i]>ma){
            ma = num[i];
            maIndex = i;
        }
        if(num[i]<=mi){
            mi = num[i];
            miIndex = i;
        }
    }
    if(maIndex>miIndex){
        maIndex = maIndex-1;
    }
    sum = (maIndex-1) + (n-miIndex);
    cout << sum;
    return 0;
}
