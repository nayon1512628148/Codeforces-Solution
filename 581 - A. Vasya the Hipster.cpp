#include <iostream>
using namespace std;
int main(){
    int a, b, rem, n1, n2;
    cin >> a >> b;
    if(a>=b){
        rem = a-b;
        n1 = b;
    }
    else{
        rem = b-a;
        n1 = a;
    }
    n2 = rem/2;
    cout << n1 << " " << n2;
    return 0;
}
