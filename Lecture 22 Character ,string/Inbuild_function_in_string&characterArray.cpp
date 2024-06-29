#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main(){

    /* ########################### FOR CHARACTER ARRAY ######################################*/

    // char arr[23] = "hello this";
    // cout << strlen(arr) << endl; // return legth of character array 

    // https://www.programiz.com/cpp-programming/library-function/cstring/strcmp
    // char str1[10] = "a";
    // char str2[10] = "z";
    // cout << strcmp(str1,str2) <<  endl;

    char dest[1];
    char source[100] = "copy from another charater string"; 
    strcpy(dest,source);
    cout << dest << endl;

    /* ########################### FOR STRING ######################################*/
    string a="ansh";
    cout << a.length() << endl;


    // https://www.geeksforgeeks.org/stdstringcompare-in-c/
    string s1 = "ansh";
    string s2 = "foransh";

    cout << s2.compare(s1) << endl;

    // Compares 4 characters from index number 3 of s2 with s1
    cout << s2.compare(3,4,s1) << endl;

    s1 = s2;
    cout << s1 << endl;
}