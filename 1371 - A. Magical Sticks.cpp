#include <iostream>
using namespace std;
int main(){
    int num, i, a;
    cin >> num;
    int result[num];
    for(i=0; i<num; i++){
        cin >> a;
        if(a%2==0){
            result[i] = a/2;
        }
        else{
            result[i] = (a/2)+1;
        }
    }
    for(i=0; i<num; i++){
        cout << result[i] << endl;
    }
    return 0;
}
