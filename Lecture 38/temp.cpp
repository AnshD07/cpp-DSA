#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a = '4' - '3';

    cout << a;

    string b = "";
    b += 'a';
    cout << b;
    
    vector<string> v = {""};
    cout << v.size() << endl;


    string temp = "ansh";
    temp.pop_back();
    cout << temp << endl;
}   