#include <iostream>
using namespace std;
int main(){
    long long int a1, a2, a3, a4, rem, sum=0, i=0;
    cin >> a1 >> a2 >> a3 >> a4;
    char s[1000000];
    cin >> s;
    while(s[i]!='\0'){
        rem = s[i];
        if(s[i]=='1'){
            sum = sum+a1;
        }
        else if(s[i]=='2'){
            sum = sum+a2;
        }
        else if(s[i]=='3'){
            sum = sum+a3;
        }
        else{
            sum = sum+a4;
        }
        i = i+1;
    }
    cout << sum;
    return 0;
}