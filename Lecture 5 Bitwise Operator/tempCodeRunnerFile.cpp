#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n; 
    // int sum=0,a=0,b=1;
    // cout << a << " " << b <<  " ";
    // while(n){
    //     sum = a+b;
    //     a=b;
    //     b=sum;
    //     cout << sum << " "; 
    //     n--;
    // }


    int sum = 1;
    int a = 2;
    
    while(n){
        sum += (sum * 2);
        cout << sum << " ";
        n--;
    }
}
