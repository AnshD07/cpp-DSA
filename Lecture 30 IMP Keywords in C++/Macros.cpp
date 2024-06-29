// https://www.geeksforgeeks.org/macros-and-its-types-in-c-cpp/

#include <iostream>
#define pi 3.14 // create macro

// also take argument in macro
#define Area(a, b) a*b

/*this si Multiline Micro*/
# define multi 3, \ 
               5, \
               4

using namespace std;
int main()
{
    // pi = pi + 1; we can't change it
    int r = 5;
    double area = pi * r * r;

    cout << " area is : " << area << endl;

    int l1 = 5, l2 = 10;
    cout << "getting area with argument : " << Area(l1, l2) << endl;

    int arr[] = {multi};
    
    for(int i=0 ; i<3 ; i++){
        cout << arr[i] << " ";
    }
}