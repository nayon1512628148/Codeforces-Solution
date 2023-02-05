#include <bits/stdc++.h>
using namespace std;
int main(){
    int i, l, j, x=0;
    string st1, st2;
        cin >> ws;
        getline(cin, st1);
        cin >> ws;
        getline(cin, st2);
        l = st1.size();
        for(j=0; j<l; j++){
            st1[j] = tolower(st1[j]);
            st2[j] = tolower(st2[j]);
        }
        for(i=0; i<l; i++){
            if(st1[i]==st2[i]){
                continue;
            }
            else{
                if(st1[i]>st2[i]){
                    x = x+1;
                    break;
                }
                else{
                    x = x-1;
                    break;
                }
            }
        }
    cout << x << endl;
    return 0;
}
