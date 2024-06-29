#include <iostream>
using namespace std; // Pointer Address store in Hexa decimal values
int main()
{

    // pointer to int is created, and pointing to some garbage value
    // int *p; /* this is bad practice */

    // int *p = 0; // null pointer
    // cout << *p << endl;

    /*

    int i = 5;
    int *q = &i;
    cout << q << endl;
    cout << *q << endl;

    // this is second way to initialize a pointer
    int *p = 0;
    p = &i;

    cout << p << endl;
    cout << *p << endl;
    */

    int num = 5;
    int a = num;
    a++;

    cout << num << endl;

    int *p = &num;
    cout << "before : " << num << endl;

    (*p)++; // write in parenthesis okay

    cout << "after : " << num << endl;

    // copying pointer
    int *q = p;

    cout << p << " - " << q << endl;
    cout << *p << " - " << *q << endl;

    // Important Concept Pointer Arithmatics

    int i = 3;
    int *t = &i;

    // (*t)++;
    *t = *t + 1;
    cout << *t << endl;

    cout << "before t : " << t << endl;

    t = t + 1; // here address addition happen with integer of 4 bytes

    cout << "After t : " << t << endl;
}