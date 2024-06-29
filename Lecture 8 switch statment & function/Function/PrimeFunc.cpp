#include<iostream>
using namespace std;

// 1 -> prime number
// 0 -> not prime number

bool isPrime(int n){
    for(int i =2 ; i < n ; i++){

        // divide hogya hai ,not a prime number
        if(n%i==0){
            return 0; 
        } 
    }
    return 1;
}

int main(){
    int n;
    cout << "Enter number : ";
    cin >> n;

    if(isPrime(n)){
        cout << "Is a Prime number ";
    }else{
        cout << "Not a Prime Number ";
    }
}