#include <iostream>
using namespace std;
int main(){
    int n, i, a, b, c, result[10000], count=0;
    cin >> n;
    for(i=0; i<n; i++){
        cin >> a >> b;
        c = a;
        while((c%b)!=0){
            if(a<b){
                c = b;
                count = b-a;
            }
            else{
                count = b-(a%b);
                break;
            }
        }
        result[i] = count;
        count = 0;
    }
    for(i=0; i<n; i++){
        cout << result[i] << endl;
    }
    return 0;
}
