#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, i, sum=0, a, b, capacity=0;
    cin >> n;
    for(i=0; i<n; i++){
        cin >> a >> b;
        sum = sum+b-a;
        if(sum>capacity){
            capacity = sum;
        }
    }
    cout << capacity << endl;
    return 0;
}
