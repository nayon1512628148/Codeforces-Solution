#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll int n, x, people=0, crime=0, i;
    cin >> n;
    for(i=1; i<=n; i++){
        cin >> x;
        if(x>0){
            people = people+x;
        }
        else{
            if(people<1){
                crime++;
            }
            else{
                people--;
            }
        }
    }
    cout << crime << endl;
    return 0;
}
