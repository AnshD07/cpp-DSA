#include<iostream>
using namespace std;

void update2(int &r){ // here giving Reference of n
    r++;
    // updating reference n then main function n also updated
} // passing reference means two name


void update(int n){
    n++;
}
    


// This is Bad Practice
int & func(int n){
    int num = n;
    int &ans = num;
    return ans;
}

int* fun(int n){
    int* ptr = &n;
    return ptr;
}

int main(){
    /*
    int i = 5;

    // create a Reference varible
    int &j = i;

    cout << i << endl;
    i++;
    cout << j << endl;
    */

   int n = 5;
   cout << " Before : " << n << endl;
//    update(n);
   update2(n);
   cout << " After : " << n << endl;

   fun(n);
}