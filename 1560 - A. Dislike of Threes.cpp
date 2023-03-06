#include <bits/stdc++.h>
using namespace std;
int main(){
    int i, num=0, n, index;
    int result[1003], input[1003];
    for(i=1; i<=1000; i++){
        num++;
        if(num%3==0 || num%10==3){
            num++;
        }
        if(num%3==0 || num%10==3){
            num++;
        }
        result[i] = num;
    }
    cin >> n;
    for(i=1; i<=n; i++){
        cin >> index;
        cout << result[index] << endl;
    }
    return 0;
}
