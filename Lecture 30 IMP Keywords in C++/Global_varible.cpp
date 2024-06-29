#include<iostream>
using namespace std;

// initilizing global varible 
int score = 15;

// global varible is bad practice it can change by any function or values
// insted of this use reference varible

void b(int &i){
    cout << i << endl;
    cout << score << " in b  " << endl;
}
void a(int &i){
    cout << i << endl;
    b(i);
    cout << score << " in a " << endl;
    score++;
}

int main(){
    int i=5;
    a(i);
    cout << score << " in main" << endl;
}