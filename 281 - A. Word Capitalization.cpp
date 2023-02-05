#include <bits/stdc++.h>
using namespace std;
int main(){
    string st;
    cin >> ws;
    getline(cin, st);
    if(st[0]>='a' && st[0]<='z'){
        st[0] = toupper(st[0]);
    }
    cout << st << endl;
    return 0;
}
