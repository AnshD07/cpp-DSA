#include<iostream>
#include<deque>

using namespace std;
int main(){
    deque<int> d;
 
    d.push_back(1);
    d.push_front(2);


    // d.pop_front();
    // d.pop_back();

    for(int i:d){
        cout << i << " ";
    }
    
    cout << endl << "Print First Index Element :  " << d.at(1) << endl;
    
    cout << "Front : " << d.front() << endl;
    cout << "back : " << d.back() << endl;

    cout<< endl<<"Empty or not  : " << d.empty() << endl;

    cout << endl<< "before Erase Size :  " << d.size() <<  endl;;

    d.erase(d.begin() , d.begin() + 1);

    cout << "After Erase Size : " << d.size() << endl;
}