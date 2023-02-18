#include <bits/stdc++.h>
using namespace std;
int main(){
    int l, i;
    string num1, num2;
    cin >> ws;
    getline(cin, num1);
    cin >> ws;
    getline(cin, num2);
    l = num1.size();
    int result[l];
    for(i=0; i<l; i++){
        if(num1[i]=='0' && num2[i]=='0'){
            result[i] = 0;
        }
        else if(num1[i]=='1' && num2[i]=='1'){
            result[i] = 0;
        }
        else if(num1[i]=='0' && num2[i]=='1'){
            result[i] = 1;
        }
        else{
            result[i] = 1;
        }
    }
    for(i=0; i<l; i++){
        cout << result[i];
    }
    return 0;
}
