#include <iostream>
using namespace std;
int main(){
    int a, b, c, n, num, i, max, total, rem;
    cin >> num;
    int result[num];
    for(i=0; i<num; i++){
        cin >> a >> b >> c >> n;
        if(a>=b && a>=c){
            max = a;
        }
        else if(b>=a && b>=c){
            max = b;
        }
        else{
            max = c;
        }
        total = (max-a) + (max-b) + (max-c);
        rem = n-total;
        if(rem<0){
            result[i] = 0;
        }
        else if(rem%3==0){
            result[i] = 1;
        }
        else{
            result[i] = 0;
        }
    }
    for(i=0; i<num; i++){
        if(result[i]==1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
