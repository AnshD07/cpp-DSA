#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // here vector size is 10 and all Element of vector is 1   :)
    // vector<int> v(10 , 1);

    // if i write like this it will intialize all with zeros 
    vector<int> v(10);


    for (int i : v) {
        cout << i << " ";
    }
        
}