#include<iostream>
#include<array>

using namespace std;
int main(){
    // simple array
    int arr[3] = {1,2,3};

    // STL array
    array<int,4> a = {1,2,3,4};

    int size = a.size();

    for(int i =0 ; i<size ; i++){
        cout << a[i] << endl;
        // cout << a.at(i) << endl;
    } 

    cout << "Element at Index 2 ==> " << a.at(2) << endl;

    cout << "Empty or Not  ==> " << a.empty() << endl;

    cout << "first Element  ==>" << a.front() << endl;

    cout << "last Element  ==> " << a.back() << endl;

cout << arr[2];





}