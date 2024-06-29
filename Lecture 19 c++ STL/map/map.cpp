#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    // map is like store key values pair here

    map<int, string> m;

    m[1] = "love";
    m[2] = "raj";
    m[13] = "Ansh";

    m.insert({5, "Brothers"});
    cout << "======Before Erase=====" << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
    cout << endl;

    cout << "is -13 present in map  -->   " << m.count(-13) << endl;

    m.erase(13);

    cout << "======After Erase=====" << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
}