#include<iostream>
using namespace std;

void update(int** p2){
    // p2 = p2 + 1;
    // kuch change hoga - NO

    cout << p2 << endl;

    // *p2 = *p2 + 1;
    // kuch change hoga - YES 

    **p2 = **p2 + 1;
    // kuch change hoga - YES
}

int main(){
    int i = 5;
    int *p = &i;
    int **p2 = &p;

    cout << " Before : " << i << endl;
    cout << " Before : " << p << endl;
    cout << " Before : " << p2 << endl;

    update(p2); cout << endl;

    cout << " After : " << i << endl;
    cout << " After : " << p << endl;
    cout << " After : " << p2 << endl;

}