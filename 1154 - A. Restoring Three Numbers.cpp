#include <iostream>
using namespace std;
int main(){
    int num[10], i, j, max, a, b, c, p, q, r, s;
    for(i=0; i<4; i++){
        cin >> num[i];
    }
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            if(num[i]<num[j]){
                swap(num[i], num[j]);
            }
        }
    }
    p = num[0];
    q = num[1];
    r = num[2];
    s = num[3];
    a = s-r;
    b = s-q;
    c = s-p;
    cout << a << " " << b << " " << c;
    return 0;
}
