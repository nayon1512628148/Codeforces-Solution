#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n, m, a, b, i, m1, m2;
    cin >> n >> m >> a >> b;
    if(m*a<=b){
        cout << n*a << endl;
    }
    else{
        if(n%m==0){
            cout << (n/m)*b << endl;
        }
        else{
            if(n/m>0){
                m1 = ((n/m)*b)+(n%m)*a;
                m2 = ((n/m)+1)*b;
            }
            else{
                m1 = b;
                m2 = n*a;
            }
            cout << min(m1,m2) << endl;
        }
    }
    return 0;
}
