#include <iostream>
using namespace std;
int main(){
    int arr[100000];
    int result[100000];
    int n, m, i, j, x=0, maxi=0, mini=0;
    cin >> n;
    for(j=1; j<=n; j++){
        cin >> m;
        for(i=0; i<m; i++){
            cin >> arr[i];
        }
        maxi=arr[0];
        for(i=1; i<m; i++){
            if(arr[i]>maxi){
                maxi = arr[i];
            }
        }
        mini=arr[0];
        for(i=1; i<m; i++){
            if(arr[i]<mini){
                mini = arr[i];
            }
        }
        result[x] = (maxi-mini);
        x++;
    }
    for(i=0; i<x; i++){
        cout << result[i] << endl;
    }
    return 0;
}
