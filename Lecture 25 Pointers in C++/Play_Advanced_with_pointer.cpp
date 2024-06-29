#include <iostream>
using namespace std;
// good declareion of pointer
/*
    int *p = 0;
    p = &i;
*/
int main()
{
    /*
    int i = 10;
    // int *p = &i;

    int *p = 0;
    p = &i;

    cout <<" Address of i varible : " << p << endl;
    cout <<" Address of Pointer p  : " << &p << endl;
    */



    // int first = 5, second = 15;

    // int *p1 = 0, *p2 = 0;

    // p1 = &first;
    // p2 = &second;

    // *p1 = 10;

    // *p2 = *p1;
    // p1 = p2; // both address are same both 
    // // address of p2 is now p1 meaning p1 and p2 pointing to same variable

    // cout << "address of p1 : "<<  p1 << endl;
    // cout << "address of p2 : "<<  p2 << endl;

    // *p1 = 20; // now value pointed to p1 is second varible okay

    // cout << "value pointed to by p1 : " << *p1 << endl; // bececause both point same value
    // cout << "value pointed to by p2 : " << *p2 << endl
    //      << endl;

    // cout << "varible 1:  " << first << endl;
    // cout << "varible 2:   " << second << endl;



    /*
    int firstvalue = 5, secondvalue = 15;
    char thirdvalue = 'a';
    int * p1, * p2;
    char * p3;
    p1 = & firstvalue; // p1 = address of firstvalue
    p2 = & secondvalue; // p2 = address of secondvalue 
    p3 = & thirdvalue; // p3 = address of thirdvalue
    * p1 = 10; // value pointed to by p1 = 10
    * p2 = * p1; // value pointed to by p2 = value pointed to by p1
    p1 = p2; // p1 = p2 (value of pointer is copied)
    * p1 = 20; // value pointed to by p1 = 20
    * p3 = 'b'; // value pointed to by p3 = ‘b ’
    cout << "firstvalue is " << firstvalue << endl;
    cout << "secondvalue is " << secondvalue << endl;
    cout << "thirdvalue is " << thirdvalue << endl;

    */


   int a = 10;
   int *p = &a;

   int **q = &p;
   int ***r = &q;

   cout << p << endl;
   cout << q << endl;
   cout << r << endl;
   


}