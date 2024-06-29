#include<iostream>
using namespace std;
// https://www.codingninjas.com/studio/guided-paths/pointers/content/235645/offering/3168907

// Remeber this and must read this documenatation of pointer

/*

& first_varible ========>  Address of First Varible
* p1  ==================> Value pointed by p1


& is the address-­of operator and can be read simply as "address of.”
 
* is the dereference operator and can be read as "value pointed to by.”

*/

int main(){
    int num = 3215;
    
    cout << num << endl;

    // address of operator - &

    cout << "Address of num is :  " << &num << endl;

    int *ptr = &num;

    cout << "values is : " << *ptr << endl;
    cout << "Address is : " << ptr << endl << endl;

    double d = 4.2;
    double *p2 = &d;

    cout << "values is  : " << *p2 << endl;
    cout << "Address is  : " << p2 << endl << endl;

    cout << "   size of interger :  " << sizeof(num) << endl;


    // at the last pointer going to store Address so size is 8 bytes 
    cout << "   size of int Pointer :  " << sizeof(ptr) << endl;
    cout << "   size of double Pointer :  " << sizeof(p2) << endl;



    // int *p; // store garbage value
    int *p = NULL ; //  NULL is constant with zero
    // int *p = 0 ; // same as above

    cout << "this is me : " << *p << endl;
}
