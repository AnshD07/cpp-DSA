#include<iostream>
#include<queue>

// A priority queue is a type of queue that arranges elements based on their priority values. Elements with higher priority values are typically retrieved before elements with lower priority values.

// In a priority queue, each element has a priority value associated with it. When you add an element to the queue, it is inserted in a position based on its priority value. For example, if you add an element with a high priority value to a priority queue, it may be inserted near the front of the queue, while an element with a low priority value may be inserted near the back.

using namespace std;
int main(){
    // max heap
    priority_queue<int> maxi;

    // min heap
    priority_queue<int ,vector<int> ,greater<int> >  mini;


    cout << "max Heap ------>    ";

    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);

    int n = maxi.size();

    for (int i=0 ; i<n ; i++){
        cout << maxi.top() << " ";
        maxi.pop();   
    }cout <<  endl << endl;

    cout << "min Heap ------>    ";
    mini.push(5);
    mini.push(1);
    mini.push(0);
    mini.push(4);
    mini.push(3);

    int m = mini.size();

    for (int i=0 ; i < m ; i++){
        cout << mini.top() << " ";
        mini.pop();
    }

    cout << "Khali he kya ? ---->   " << mini.empty();

    
}
