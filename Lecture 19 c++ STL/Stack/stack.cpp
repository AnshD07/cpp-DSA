#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<string> s;

    s.push("Ansh");
    s.push("Raj");
    s.push("Kishan");
    s.push("Keval");

    cout <<  "Top Element :   "<< s.top() << endl;

    s.pop();

    cout << "after pop " << endl;
    cout << "Top Element :    " << s.top() << endl;


    cout <<  "size of stack :  " << s.size() << endl;

    cout << "Empty or Not :  " <<  s.empty() << endl;


}