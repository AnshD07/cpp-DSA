// https://www.codingninjas.com/studio/problems/search-in-rotated-sorted-array_1082554?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2



/*
#include<iostream>
using namespace std;

int getPivot(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid = s + (e-s)/2;

    while(s<e){
        if(arr[mid]>=arr[0]){
            // in First Line then start point is move to pivot
            s = mid + 1;
        }else{// in Second line so we only set mid to end point
            e  = mid;
        }

        mid = s + (e-s)/2;
    }

    return s;
    // return pivot Index you can see that
}

int main(){
    int arr[6]={6,7,9,1,2,3}; 
    int s,e;
    int k = 3;
    int pivot = getPivot(arr,6);
 
    if(k > arr[0]){
        s = 0;
        e = pivot - 1;
    }
    else
    { // k < arr[0]
        s = pivot;
        e = 6-1;
    }

    int mid = s + (e-s)/2;
    int ans=-1;
    while(s <= e){
        if(arr[mid] == k){
            ans= mid;
            break;
        }
        else if(arr[mid] < k) // going on Right Side
        {
            s = mid + 1;
        }
        else // arr[mid] > k  // going to left side
        {
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
 
    cout << "Youe Key Index in Roatated sorted array is  :  " << ans;
}

*/ 