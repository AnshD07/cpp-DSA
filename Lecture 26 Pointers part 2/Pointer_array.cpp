#include<iostream>
using namespace std;

int main(){

    /*
    int arr[10] = {14,22,73,34,57,6,79,89,94,10};

    cout << " Address of first memory block : " << &arr  << endl;
    cout << " Address of first memory location : " << &arr[0]  << endl;
    cout << &arr[1] << endl;
    cout << " simple addition : " <<*arr + 1 << endl;
    cout << " value at arr[2]  :  " << *(arr + 2) << endl;
    cout << "2nd  : " << arr+1 << endl;


    int i = 4;
    cout << i[arr] << endl; // this work from formula and chalaki ++

    cout << &arr + 10 << endl; // addres update by 1 means 4 byte

    */

   /*
   int temp[10];

   cout << sizeof(temp) << endl;
   cout << sizeof(*temp) << endl;

   int *ptr = &temp[0]; 
   cout << sizeof(ptr) << endl; // here size should be 8 bytes
   cout << sizeof(*ptr) << endl;
   cout << sizeof(&ptr) << endl;
   */


//   int arr[2] = {1,2};
//   cout << &arr[0] << endl;

//   int *ptr = &arr[0];  
//   cout << &ptr << endl;


    int arr[10] = {1,2};

    // arr = arr + 1;
    // ERROR symbol table cannot be change

    int *ptr = &arr[0];

    cout << ptr << endl;
    cout << *ptr <<  endl;

    ptr = ptr + 1; // change address by 4 bytes go to next block of arr
    // because ptr store address of arr
    cout << ptr << endl;
    cout << *ptr <<  endl;
}