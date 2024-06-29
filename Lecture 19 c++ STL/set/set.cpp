#include<iostream>
#include<set>
using namespace std;

int main(){
    set <int> s;

    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(3);
    s.insert(3);
    s.insert(7);
    s.insert(7);
    s.insert(7);
    s.insert(1);
    s.insert(10);

// set Automatilay sort the array


    for (int i:s){
        cout << i << " ";   
    }cout << endl << endl;

    // s.erase(s.begin());

    set <int>::iterator it = s.begin();
    it++;

    s.erase(it); // it remove second index element


    for (auto i:s){
        cout << i << " "; 
    }
    cout << endl; 

    cout << "5 is present or not  ->  " << s.count(-5);

    set<int>::iterator itr = s.find(5);

    cout << endl << endl;
    for(auto it = itr ; it != s.end() ; it++){
        cout << *it << " ";
    }
}