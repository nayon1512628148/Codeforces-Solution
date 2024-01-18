#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t, i, j, numOfSubscriber, online, notification, result, temp;
    string St;
    cin >> t;
    for(i=0; i<t; i++){
        cin >> numOfSubscriber >> online >> notification;
        cin >> ws;
        temp = online;
        getline(cin, St);
        for(j=0; j<notification; j++){
            if(online>=numOfSubscriber){
                result = 1;
                break;
            }
            if(St[j]=='+'){
                online++;
                temp++;
            }
            if(online>=numOfSubscriber){
                result = 1;
                break;
            }
            if(St[j]=='-'){
                online--;
            }
        }
        if(online<numOfSubscriber){
            result = 0;
        }
        if(result==0 && temp>=numOfSubscriber){
            result = 2;
        }
        if(result==1){
            cout << "YES" << endl;
        }
        else if(result==0){
            cout << "NO" << endl;
        }
        else{
            cout << "MAYBE" << endl;
        }
    }
    return 0;
}
