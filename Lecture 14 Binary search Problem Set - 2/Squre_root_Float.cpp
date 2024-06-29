#include<iostream>
using namespace std;

long long int sqrtInteger(int n){
    int s = 0;
    int e =n;
    long long int mid = s + (e-s)/2;
    // at big value mid varible may be blast like 2^31
    int ans = -1;
    while(s <= e){
       long long int sqre = mid * mid;
        if(sqre == n){
            return mid;
        }else if(sqre < n){
            ans = mid;
            s = mid + 1;
        }else{
            e = mid -1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}


double MorePrecise(int n , int Pricision ,int IntPart){
    double factor = 1;
    double ans = IntPart;

    for(int i=0 ; i < Pricision ; i++){
        factor = factor / 10;
        // 0.1
        // 0.01
        // 0.001

        for(double j = ans; j*j < n ; j= j + factor){
            ans = j;
        }
        // factor + 0.1 like something you understand
 
    }

    return ans;
}

int main(){
    int n;
    cout << "Enter Number :   " ;
    cin >> n;

    int IntPart = sqrtInteger(n);


    cout << "answer is :  " << MorePrecise(n,3,IntPart);

}