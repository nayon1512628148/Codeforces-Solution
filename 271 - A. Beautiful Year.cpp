#include <bits/stdc++.h>
using namespace std;
int main(){
    int year, i=0, yes=0, y, m, n, same, rem;
    int num[1000];
    cin >> year;
    year = year + 1;
    while(yes!=1){
        y = year;
        while(y!=0){
            rem = y%10;
            num[i] = rem;
            y = y/10;
            i++;
        }
        for(m=0; m<i; m++){
            for(n=m+1; n<i; n++){
                if(num[m]==num[n]){
                    same = 1;
                    break;
                }
                else{
                    same = 0;
                }
            }
            if(same==1){
                break;
            }
        }
        i = 0;
        year++;
        if(same==1){
            yes = 0;
        }
        else{
            yes = 1;
        }
    }
    cout << year-1;
    return 0;
}
