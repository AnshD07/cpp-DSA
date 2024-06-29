#include<iostream>
using namespace std;
void reverse(string &a,int i,int j){ // reference varible given otherwise pass by value concept apply
    if(i>j) return ;

    swap(a[i],a[j]);

    reverse(a,i+1,j-1);
}
int main(){
    string a = "abcde";

    reverse(a,0,a.length()-1);
    
    cout << a;
}

// https://www.naukri.com/code360/problems/reverse-the-string_799927?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_13&leftPanelTabValue=SUBMISSION





// #include <bits/stdc++.h> 
// void reverse(string &a,int i,int j){ // reference varible given otherwise pass by value concept apply
//     if(i>j) return ;

//     swap(a[i],a[j]);

//     reverse(a,i+1,j-1);
// }
// string reverseString(string str)
// {
// 	reverse(str,0,str.length()-1);
//     return str;
// }