// https://www.codingninjas.com/studio/problems/check-if-the-string-is-a-palindrome_1062633?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_5

#include<iostream>
using namespace std;

char toLowercase(char ch){
    if( ch>='a' && ch<='z' ) return ch;
    else{
        int temp = ch - 'A' + 'a';
        return temp;
    }
}

bool chcekpalindrome(char a[],int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        // if(toLowercase(a[s]) != toLowercase(a[e])) return 0;
        if(a[s] != a[e]) return 0; // case sensitive
        else s++;e--;
    }  
    return 1;
}

int length(char name[]){
    int count = 0;
    for(int i=0 ; name[i] != '\0' ; i++){
        count++;
    }
    return count;
}



int main(){
    char name[20];
    cout << ">>> ";
    cin >> name;
    int n = length(name);

    cout << "Palidrom or not :  "<<chcekpalindrome(name,n);
}