// https://leetcode.com/problems/reverse-string/description/

#include<iostream>
using namespace std;


int length(char name[]){
    int count = 0;
    for(int i=0 ; name[i] != '\0' ; i++){
        count++;
    }
    return count;
}

void reversestring(char name[]){
    int s=0;
    int e=length(name) - 1;

    while(s<=e){
        swap(name[s++],name[e--]);
    }
 
}
int main(){
    char name[20];
    cout << ">> :  ";
    cin >> name;
 
 
    // after reverse
    reversestring(name);
    
    cout << name;
}




// class Solution {
// public:
//     void reverseString(vector<char>& s) {
        
//         int start=0;
//         int e= s.size(); -1;

//         while(start<=e){
//             swap(s[start++],s[e--]);
//         }
//     }
// };