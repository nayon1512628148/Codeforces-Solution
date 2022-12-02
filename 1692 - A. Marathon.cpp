#include <iostream>
using namespace std;
int main(){
    int n, i, a, b,c, d, sum=0, result[10000];
    cin >> n;
    for(i=0; i<n; i++){
        cin >> a >> b >> c >> d;
        if(b>a){
            sum = sum+1;
        }
        if(c>a){
            sum = sum+1;
        }
        if(d>a){
            sum = sum+1;
        }
        result[i] = sum;
        sum = 0;
    }
    for(i=0; i<n; i++){
        cout << result[i] << endl;
    }
    return 0;
}
