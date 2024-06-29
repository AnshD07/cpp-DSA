#include<iostream>
using namespace std;

int getlength(char name[]){
    int count = 0;
    for(int i=0 ; name[i] != '\0' ; i++){
        count++;
    }
    return count;
}

int main(){
    char name[20];
    cout << "enter name : ";
    cin >> name;

    // int length=0;
    // for (int i:name){
    //     if(i=='\0') break;
    //     length++;
    // }
    // cout << length;

    cout << "Length is :  " << getlength(name);

}