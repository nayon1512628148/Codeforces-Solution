#include <iostream>
using namespace std;
int main(){
    int n, i, m, sum =0, rem;
    cin >> n;
    int arr[n];
    for(i=0; i<n; i++){
        cin >> arr[i];
    }
    m = arr[0];
    for(i=1; i<n; i++){
        if(arr[i]>m){
            m = arr[i];
        }
    }
    for(i=0; i<n; i++){
        rem = m - arr[i];
        sum = sum + rem;
    }
    cout << sum;
    return 0;
}
