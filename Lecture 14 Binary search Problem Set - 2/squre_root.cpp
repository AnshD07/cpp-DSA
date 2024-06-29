#include<iostream>
using namespace std;
 

long long int BinarySearch(int n){
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

int main()
{
    // Write your code here.
    int n = 100000000;
    cout <<"Squre root of " << n  << "  is  ==>   "<< BinarySearch(n);
}

// https://www.codingninjas.com/studio/problems/square-root_893351?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2 

// int floorSqrt(int n)
// {
//     int s=0;
//     int e=n;
//     long long int mid = s + (e-s)/2;
//     int ans = -1;
//     while(s<=e){
//         long long int sqr = mid * mid;
//         if(sqr == n){
//             return mid;
//         }
//         else if(sqr < n){
//             ans = mid;
//             s = mid + 1;
//         }
//         else{
//             e = mid -1;
//         } 
        
//         mid = s + (e-s)/2;
//     }

//     return ans;
// }
