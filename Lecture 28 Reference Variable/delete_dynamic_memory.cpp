#include<iostream>
using namespace std;
int main(){
    int* i = new int;
    *i = 12345;

    cout << " before delete values :  "<< *i << endl;
    delete i;
    cout << " After delete values :  "<< *i << endl;

    cout << endl << endl << "for delete array memory in dynamic memory block" << endl << endl;

    int *arr = new int[50];

    *(arr+1)=5013;
    cout << *(arr + 1) << endl;
    delete []arr;
    cout << *(arr + 1) << endl;

}