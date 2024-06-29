#include <iostream>
using namespace std;
int main()
{
    /*
    new int or new char that create particular memory in heap and return address of it so we store that address in pointer in stack memory(static memory)

    okay
    */
    int *ptr = new int; // storing address of new int from heap memory in ptr pointer

    cout << ptr << endl;

    cout << new char << endl; // new are use to return address in heap memory

    
}