#include <iostream>
using namespace std;
int main(){
    long long int t, i, total;
    long long int n, result[100000], x;
    cin >> t;
    for(i=0; i<t; i++){
        cin >> n;
        result[i] = n;
    }
    for(i=0; i<t; i++){
        cout << result[i] << endl;
    }
    return 0;
}
