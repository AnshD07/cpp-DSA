#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(8);

    cout << "finding index of 6 :  " << binary_search(v.begin(), v.end(), 6) << endl;

    cout << "lower Bond :  " << lower_bound(v.begin(), v.end(), 6) - v.begin() << endl;
    cout << "Upper Bond :  " << upper_bound(v.begin(), v.end(), 4) - v.begin() << endl
         << endl;

    int a = 3;
    int b = 5;

    cout << "max -- > " << max(a, b) << endl;
    cout << "max -- > " << min(a, b) << endl;

    swap(a, b);
    cout << a << " " << b << endl;

    string abcd = "ABCDEFGH";
    reverse(abcd.begin(), abcd.end());
    cout << "reverse string is now  --->  " << abcd << endl;

    rotate(v.begin() , v.begin() + 1, v.end());

    for(auto i:v){
        cout << i << " ";
    }
    
}