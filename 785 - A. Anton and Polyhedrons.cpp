#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, i, sum=0;
    cin >> n;
    string st;
    for(i=0; i<n; i++){
        cin >> ws;
        getline(cin, st);
        if(st=="Tetrahedron"){
            sum = sum+4;
        }
        else if(st=="Cube"){
            sum = sum+6;
        }
        else if(st=="Octahedron"){
            sum = sum+8;
        }
        else if(st=="Dodecahedron"){
            sum = sum+12;
        }
        else{
            sum = sum+20;
        }
    }
    cout << sum;
    return 0;
}
