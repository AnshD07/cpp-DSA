#include<iostream>
using namespace std;
int main(){
    int i=5;
    int* p = &i;
    int** p2 = &p;


    cout << p << endl;
    cout << " adress of p : " << &p << endl;
    cout << *p2 << endl;
    
    cout << i << endl;
    cout << *p << endl;
    cout << **p2 << endl;

    cout << endl << &i << endl;
    cout << p << endl;
    cout << *p2 << endl;

    cout <<endl<< &p << endl;
    cout << p2 << endl;
}