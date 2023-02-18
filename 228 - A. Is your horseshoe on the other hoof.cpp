#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int a, b, c, d, sum=0;
    cin >> a >> b >> c >> d;
    if(a==b){
        sum = sum+1;
    }
    if(b==c){
        sum = sum+1;
    }
    if(c==d){
        sum = sum+1;
    }
    if((a!=b && b!=c && c!=d) && (a==c)){
        sum = sum+1;
    }
    if((a!=b && b!=c && c!=d) && (a==d)){
        sum = sum+1;
    }
    if((a!=b && b!=c && c!=d) && (b==d)){
        sum = sum+1;
    }
    if((a!=b && b==c && c!=d) && (a==d)){
        sum = sum+1;
    }
    cout << sum;
    return 0;
}
