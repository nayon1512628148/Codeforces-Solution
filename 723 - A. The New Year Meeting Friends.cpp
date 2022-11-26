#include <iostream>
using namespace std;
int main(){
    int a, b, c, first, mid, last, distance=0;
    cin >> a >> b >> c;
    first = a;
    if(b<first){
        first = b;
    }
    if(c<first){
        first = c;
    }
    last = a;
    if(b>last){
        last = b;
    }
    if(c>last){
        last = c;
    }
    if((first==a && last==c) || (last==a && first==c)){
        mid = b;
    }
    else if((first==b && last==c) || (last==b && first==c)){
        mid = a;
    }
    else{
        mid = c;
    }
    distance = mid-first;
    distance = distance+(last-mid);
    cout << distance;
    return 0;
}