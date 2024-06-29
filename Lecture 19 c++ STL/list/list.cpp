#include<iostream>
#include<list>
using namespace std;

int main(){
    list <int> l;

    l.push_back(1);
    l.push_front(2);
    cout << "size of list  :   " << l.size() <<  endl;

    for(int i:l){
        cout << i << " ";
    }
    cout << endl;

    cout << "Front : " << l.front() <<  endl;
    cout << "Back : " << l.back() <<  endl;

    cout <<  endl;
    l.erase(l.begin());
    cout <<  "After Erase :  " <<endl;
    for(int i:l){
        cout << i << " ";
    }

    cout <<  endl << endl;

    list<int> n(5,100);
    for(int i:n){
        cout << i << " " ;
    }


}