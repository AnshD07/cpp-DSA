// #include <iostream>
// using namespace std;

// int FindPivot(int arr[],int n){
//     int s = 0;
//     int e = n - 1 ;
//     int mid = s + (e-s)/2;

//     while(s<e){
//         if(arr[mid] >= arr[0]){
//             s = mid + 1;
//         }
//         else{ // mid also be the pivot so this gonna execute
//             e = mid;
//         }
//         mid = s + (e-s)/2;
//     }
//     // return e;
//     return s;

//     // anything we can write (end or start) do dry run okay
// }

// int main(){
//     int arr[6]={6,7,9,1,2,3};

//     // defn of Pivot see in the lecture 14 for better understanding

//     cout << "Pivot Index Of array is : " << FindPivot(arr,6) << endl;
// }



// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int pivot(int *arr,int s,int e,int ans=-1){
    // Base case
    if (s==e) return s;
    
    int mid = s+(e-s)/2;
    if(arr[0] < arr[mid]){
        return pivot(arr,mid+1,e,ans);
    }
    else if(arr[0] > arr[mid]){
        ans = mid;
        e = mid;
        return pivot(arr,s,e,ans);
    }
}

int main() {
    int arr[7] = {6,7,9,10,1,2,3};
    
    cout <<"Pivot index of given array is : " <<  pivot(arr,0,6) << endl;
    
    return 0;
}