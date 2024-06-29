#include<iostream>
using namespace std;
bool checkpalindrome(string str,int i,int j){
    // Base case
    if(i>j) return true;

    if(str[i] != str[j]) return false;

    // Recursive call
    return checkpalindrome(str,i+1,j-1);
}
int main(){
    string a = "abbbba";

    
    cout << checkpalindrome(a,0,a.length()-1);
}