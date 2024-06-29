#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<string> q;

    q.push("Love");
    q.push("Babbar");
    q.push("Kumar");

    // First In First Out Concept use here
    
    cout << "First Element :  " << q.front() << endl;

    q.pop();

    cout << "After pop " << endl;
    cout << "First Element :  " << q.front() << endl;

    // cout << "last Element : " <<  q.back() << endl;

    cout << "Size after Pop : " << q.size() << endl;
}