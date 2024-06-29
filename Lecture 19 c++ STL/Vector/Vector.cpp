#include <iostream>
#include <vector>

using namespace std;

int main()
// if vector size is 4 then we add 5th element than it make another new Vector with double size of old Vector and copy all element from Vector to new Vector
{
    // intializing vector

    vector<int> v;

    cout << "Capacity  :  " << v.capacity() << endl;
    // capacity give how much space Assign for element
    // or how much memory assign for element

    v.push_back(32);
    cout << "Capacity  :  " << v.capacity() << endl;

    v.push_back(324);
    cout << "Capacity  :  " << v.capacity() << endl;

    v.push_back(54);
    cout << "Capacity  :  " << v.capacity() << endl;

    cout << "size :  " << v.size() << endl;
    // size define how many element in array

    cout << "element at 2nd Index : " << v.at(2) << endl;

    cout << "front : " << v.front() << endl;
    cout << "Back : " << v.back() << endl;

    cout << endl << "Before pop_back " << endl;
    for (int i : v) {
        cout << i << " ";
    }

    v.pop_back(); // pop_back remove last element from array

    cout << endl << "After pop_back " << endl;
    for (int i : v)
    {
        cout << i << " ";
    }

    cout << endl << "Before clear size :  " << v.size() << endl;

    v.clear();

    cout <<  "After clear size :  " << v.size() << endl;
    cout <<"After clear Capacity : " << v.capacity() << endl;  // Capacity remain last capacity after clear size 
  
}
