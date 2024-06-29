#include<iostream>
using namespace std;
int peak_index(int *arr,int s,int e,int ans){
        // Base case
        if(s>e) return ans;

        int mid = s +(e-s)/2;
        if(arr[mid] < arr[mid+1]){
            s = mid + 1;
            ans = mid;
        }
        else{
            e = mid;
        }

        return peak_index(arr,s,e,ans);
    }
int main(){
    int arr[4] = {0,10,5,2};

    cout << peak_index(arr,0,3,-1);
}


/*  Threw REcursion Method  */

class Solution {
private:
    int peak_index(vector<int> &arr,int s,int e){
        // Base case
        if(s==e) return e;

        int mid = s +(e-s)/2;
        if(arr[mid] < arr[mid+1]){ //linearly up side so go one 
            s = mid + 1;
        }
        else{ // not linearly so it should be the answer
            e = mid;
        }

        return peak_index(arr,s,e);
    }
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        return peak_index(arr,0,arr.size()-1);
    }
};