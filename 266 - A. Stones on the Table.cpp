#include <iostream>
#include <string.h>
using namespace std;
int main(){
    int n, i, sum=0;
    string s;
    cin >> n;
    cin >> ws;
    getline(cin, s);
    for(i=0; i<n; i++){
        if(s[i]==s[i+1]){
            sum++;
        }
    }
    cout << sum;
    return 0;
}
