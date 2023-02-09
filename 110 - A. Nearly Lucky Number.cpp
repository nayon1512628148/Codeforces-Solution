#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int num;
    int total=0;
    cin >> num;
    while(num!=0){
        if(num%10==4 || num%10==7){
            total++;
        }
        num = num/10;
    }
    if(total==4 || total==7){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
    return 0;
}
