#include <iostream>
using namespace std;
int main(){
    int n, i, j, k, num, sum1=0, sum2=0, result[10000], rem;
    cin >> n;
    for(i=0; i<n; i++){
        cin >> num;
        for(j=1; j<=3; j++){
            rem = num%10;
            num = num/10;
            sum1 = sum1+rem;
        }
        for(k=1; k<=3; k++){
            rem = num%10;
            num = num/10;
            sum2 = sum2+rem;
        }
        if(sum1==sum2){
            result[i] = 1;
        }
        else{
            result[i] = 0;
        }
        sum1 = 0;
        sum2 = 0;
    }
    for(i=0; i<n; i++){
        if(result[i]==1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
