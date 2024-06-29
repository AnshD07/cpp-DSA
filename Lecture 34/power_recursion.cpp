// Full Optimised Code
#include<iostream>
using namespace std;

// solve small problem baki bdhi thy jashe that babbar say


int power(int a,int b){ // best optimal code it was from formula you can see that

    if(b==0) return 1;
    if(b==1) return a;
    // cout << "now power is : " << b << endl;
    
    if(b%2==1){ // b is even
        return a * ( power(a,b/2) * power(a,b/2) );
    }
    else{ // b is odd
        return power(a,b/2) * power(a,b/2);
    }
}

int main(){
    int a = 2,b =10;

    cout << power(a,b) << endl;
}







// NOT optimised code
// #include<iostream>
// using namespace std;
// long long int power(int a,int b){
//     if(b==0) return 1;
//     if(b==1) return a;

//     return a * power(a,b-1);
// }
// int main(){
//     int a=2,b=3;
//     long long int ans = power(a,b);

//     cout << a << " ^ " << b << " is : "<< ans << endl;

// }