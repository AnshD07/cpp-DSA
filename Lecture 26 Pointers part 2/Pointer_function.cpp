#include<iostream>
using namespace std;
void print(int *p){
    cout << p << endl;
}

void update(int *p){
    // p = p + 1;
    // cout << " inside " << p << endl;

    *p = *p + 1; // value update thay bhai
    // value pointed to by p chhe addres thi aena memory block ni value change thay
}


int getSum(int *arr,int n){

    cout << endl << " Size " << sizeof(arr) << endl; // here should be size 8 bytes

    int sum = 0;
    for(int i=0 ; i<n ; i++){
        // sum += arr[i];
        sum += i[arr];
    }
    return sum;
}


int main(){
    /*
    int value = 5;
    int *p = &value;

    // print(p);
    cout << " before addres " << p << endl;
    cout << " before values : " << *p << endl;
    update(p);
    cout << " after addres " << p << endl;
    cout << " after values : " << *p << endl;
    */

    int arr[5] = {1,2,3,4,5};
    cout << " sum is "<<  getSum(arr,5) << endl;

    
    
}