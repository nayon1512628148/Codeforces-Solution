#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n, l, i, m=0;
    cin >> n >> l;
    int Arr[n];
    for(i=0; i<n; i++){
       cin >> Arr[i];
    }
    sort(Arr, Arr+n);
    for(i=0; i<n-1; i++){
       if(Arr[i+1]-Arr[i]>m){
            m = Arr[i+1]-Arr[i];
       }
    }
    double x = Arr[0];
    double y = (double)m/2;
    double ans = max(x,y);
    double z = l-Arr[n-1];
    double finalAns = max(ans, z);
    cout << fixed << setprecision(10) << finalAns << endl;
    return 0;
}
