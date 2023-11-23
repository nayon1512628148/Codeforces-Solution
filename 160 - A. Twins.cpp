#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int i, j, ArrSize, temp, Sum=0, myCoin=0, step=0;
    cin >> ArrSize;
    int Arr[ArrSize+1];
    for(i=0; i<ArrSize; i++){
        cin >> Arr[i];
        Sum = Sum+Arr[i];
    }
    for(i=0; i<ArrSize; i++){
        for(j=i+1; j<ArrSize; j++){
            temp = Arr[i];
            if(Arr[i]<Arr[j]){
                Arr[i] = Arr[j];
                Arr[j] = temp;
            }
        }
    }
    i=0;
    while(myCoin<=Sum){
        myCoin = myCoin+Arr[i];
        Sum = Sum-Arr[i];
        i++;
        step++;
    }
    cout << step << endl;
    return 0;
}
