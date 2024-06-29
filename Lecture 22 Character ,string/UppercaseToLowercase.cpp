#include<iostream>
using namespace std;

char toLowercase(char ch){
    if((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')) {
        return ch;
    }
    else
    {  // uppercase charcter ho
        int temp = ch - 'A' + 'a';
        return temp;
    }
}

char toUppercase(char ch){
    if(ch>='A' && ch<='Z') return ch;
    else
    {
        int temp = ch - 'a' + 'A'; // for uppercase we add capital A here
        return temp;
    }
}

int main(){
    cout << "character to lowercase :  " << toLowercase('A') << endl;

    cout << "character to Uppercase :  " << toUppercase('t') << endl;
    
}