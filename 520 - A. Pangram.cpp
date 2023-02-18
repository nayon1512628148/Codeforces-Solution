#include <bits/stdc++.h>
using namespace std;
int main(){
    int num, i, a=0, b=0, c=0, d=0, e=0, f=0, g=0, h=0, ii=0, j=0, k=0, l=0, m=0, n=0, o=0, p=0, q=0, r=0, s=0, t=0, u=0, v=0, w=0, x=0, y=0, z=0;
    string st;
    cin >> num;
    cin >> ws;
    getline(cin, st);
    for(i=0; i<num; i++){
        if(st[i]=='a' || st[i]=='A'){
            a++;
        }
        else if(st[i]=='b' || st[i]=='B'){
            b++;
        }
        else if(st[i]=='c' || st[i]=='C'){
            c++;
        }
        else if(st[i]=='d' || st[i]=='D'){
            d++;
        }
        else if(st[i]=='e' || st[i]=='E'){
            e++;
        }
        else if(st[i]=='f' || st[i]=='F'){
            f++;
        }
        else if(st[i]=='g' || st[i]=='G'){
            g++;
        }
        else if(st[i]=='h' || st[i]=='H'){
            h++;
        }
        else if(st[i]=='i' || st[i]=='I'){
            ii++;
        }
        else if(st[i]=='j' || st[i]=='J'){
            j++;
        }
        else if(st[i]=='k' || st[i]=='K'){
            k++;
        }
        else if(st[i]=='l' || st[i]=='L'){
            l++;
        }
        else if(st[i]=='m' || st[i]=='M'){
            m++;
        }
        else if(st[i]=='n' || st[i]=='N'){
            n++;
        }
        else if(st[i]=='o' || st[i]=='O'){
            o++;
        }
        else if(st[i]=='p' || st[i]=='P'){
            p++;
        }
        else if(st[i]=='q' || st[i]=='Q'){
            q++;
        }
        else if(st[i]=='r' || st[i]=='R'){
            r++;
        }
        else if(st[i]=='s' || st[i]=='S'){
            s++;
        }
        else if(st[i]=='t' || st[i]=='T'){
            t++;
        }
        else if(st[i]=='u' || st[i]=='U'){
            u++;
        }
        else if(st[i]=='v' || st[i]=='V'){
            v++;
        }
        else if(st[i]=='w' || st[i]=='W'){
            w++;
        }
        else if(st[i]=='x' || st[i]=='X'){
            x++;
        }
        else if(st[i]=='y' || st[i]=='Y'){
            y++;
        }
        else{
            z++;
        }
        if(a>0 && b>0 && c>0 && d>0 && e>0 && f>0 && g>0 && h>0 && ii>0 && j>0 && k>0 && l>0 && m>0 && n>0 && o>0 && p>0 && q>0 && r>0 && s>0 && t>0 && u>0 && v>0 && w>0 && x>0 && y>0 && z>0){
            break;
        }
    }
    if(a>0 && b>0 && c>0 && d>0 && e>0 && f>0 && g>0 && h>0 && ii>0 && j>0 && k>0 && l>0 && m>0 && n>0 && o>0 && p>0 && q>0 && r>0 && s>0 && t>0 && u>0 && v>0 && w>0 && x>0 && y>0 && z>0){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}
