#include<iostream>
using namespace std;

int gcd(int a,int b){   
    if(a==0) return b;
    if(b==0) return a;

    while(a!=b){
        if(a>b) a -= b;
        else b -= a;
    }

    return a;
}

int main(){
    cout << gcd(24,72);
    // cout << gcd(72,24);
}






