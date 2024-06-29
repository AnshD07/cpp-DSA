#include <iostream>
using namespace std;
int getsum(int *arr , int n){
    int sum = 0;
    for(int i=0 ; i<n ; i++){
        sum += *(arr + i); // both are same bro

        /* arr[i] == *(arr + i)*/
    }
    return sum;
}
int main()
{
    int n;
    cin >> n;


    int* arr = new int[n]; // this store arr of size of n in dynamic memory

    for(int i=0 ; i<n ; i++){
        cin >> arr[i];
    }

    cout << " sum is : "<<  getsum(arr,n);

}