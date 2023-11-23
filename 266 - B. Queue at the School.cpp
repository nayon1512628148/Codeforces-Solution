#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int StSize, time, i, j;
    string St, StCopy;
    cin >> StSize >> time;
    cin >> ws;
    getline(cin, St);
    for(j=1; j<=time; j++){
        StCopy = St;
       for(i=0; i<StSize-1; i++){
            if(StCopy[i]=='B'){
                St[i] = St[i+1];
                St[i+1] = 'B';
            }
        }
    }
    cout << St;
    return 0;
}
