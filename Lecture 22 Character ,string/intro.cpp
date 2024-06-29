#include<iostream>
using namespace std;

int main(){
    // char name[20];
    // cout << "enter your name : ";
    // cin >> name;

    // name[2] = '\0'; // at second index there is null character

    // cout << endl << "your name is :  " << name;
    
    char arr[23] = {'H','e','l','l','o','\0'};

    char arr2[5] = "ansh"; // here null charcter included
    cout << arr << endl; 


    string s = "Hello\0this text cant be show";

    cout << s << endl;
}

