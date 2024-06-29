#include<iostream>
using namespace std;

int main(){
    int a = 21;
    int b = 2;
    int m = 12;

    cout << (a+b) % m << endl; // 23 % 12 = 11 <-- remainer

    cout << (a%m + b%m) % m  << endl;
}