#include<iostream>
using namespace std;
void countsay(int n,string *arr){
    // Base case
    if(n==0) return ;

    // Processing
    int digit = n%10;
    n = n / 10;
    
    // Recursive Relation
    countsay(n,arr);

    // Logic chahiye 
    cout << arr[digit] << " ";


}
int main(){
    string arr[10] = {"Zero","one","two","three","four","five","six","seven","eight","nine"};

    countsay(12345 ,arr);
}