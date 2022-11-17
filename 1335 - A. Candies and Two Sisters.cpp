#include <iostream>
using namespace std;
int main(){
    int num, i;
    long long int arr[10000], result[10000], sum=0;
    cin >> num;
    for(i=0; i<num; i++){
        cin >> arr[i];
        if(arr[i]%2==0){
            sum = (arr[i]/2)-1;
        }
        else{
            sum = arr[i]/2;
        }
        result[i] = sum;
    }
    for(i=0; i<num; i++){
        cout << result[i] << endl;
    }
    return 0;
}