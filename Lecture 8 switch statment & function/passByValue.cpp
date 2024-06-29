#include<iostream>
using namespace std;

void dummy(int n){
    n++;
    cout << " n is " << n <<endl;
}

int main(){
    int n = 3;

    dummy(n);

    cout << "Number n is " << n << endl;

    return 0;
    // here in passby value not change in integer but change in array 
}