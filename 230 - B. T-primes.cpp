#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll int n, i, j, b, sq;
    //Sieve of Eratosthenes Algorithms
    ll int arr[1000000]={0};
    for(i=2; i<=1000000; i++){
        if(arr[i]==0){
            for(j=2; i*j<=1000000; j++){
                arr[i*j] = 1;
            }
        }
    }
    cin >> n;
    for(i=0; i<n; i++){
        cin >> b;
        sq=sqrt(b);
        if(b==1){
            cout << "NO" << endl;
        }
        else if(sq*sq==b && arr[sq]==0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
