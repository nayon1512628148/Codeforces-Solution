#include <iostream>
using namespace std;
int main(){
    int n, x, i, j, result[10000], last, digit=0, value=0;
    cin >> n;
    for(i=0; i<n; i++){
        cin >> x;
        last = x%10;
        while(x!=0){
            x = x/10;
            digit++;
        }
        for(j=0; j<last; j++){
            value = value+10;
        }
        if(digit==3){
            value = value-4;
        }
        else if(digit==2){
            value = value-7;
        }
        else if(digit==1){
            value = value-9;
        }
        else{
            value = value-0;
        }
        result[i] = value;
        value = 0;
        digit = 0;
    }
    for(i=0; i<n; i++){
        cout << result[i] << endl;
    }
    return 0;
}