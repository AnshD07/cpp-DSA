#include<iostream>
#include<cstring>
using namespace std;
int main(){
    // string temp;
    // getline(cin,temp);
    // cout << temp << endl;

    // string del;
    // getline(cin,del,'$'); 
    // /* here delimiting charater is $
    //   by default delimiting character is '\n' */
    // cout << del << endl;
    
    char ch[1];
    cin.getline(ch,11,'$'); // now it print 10 times with charcter
    cout << ch;
    // $ is custom delimiter
        
}

