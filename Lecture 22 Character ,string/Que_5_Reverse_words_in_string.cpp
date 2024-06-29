#include<iostream> // this code is written by ansh
using namespace std;

string doreverse(string a){
    int s=0,e=a.length()-1;
    while(s<=e){
        swap(a[s++],a[e--]);
    }
    return a;
}

int main(){
    string name = "My name is ansh";

    cout << name[16] << endl;
    string temp = "";
    string ans = "";
    for(int i = 0; i < name.length()+1 ; i++){

        if( (name[i] == ' ') || (name[i] == '\0') ){
            ans.append(doreverse(temp));
            ans.push_back(' ');
            temp.clear();
            continue;
        }
        temp.push_back(name[i]);
        
    }

    cout << ans << endl;
    // cout << doreverse(name);
}










// #include<iostream>
// #include<string>
// using namespace std;

// string reverse(string a){
//     int s=0;
//     int e = a.size()-1;
//     while(s<=e){
//         swap(a[s++] , a[e--]);
//     }
//     return a;
// }

// string searchSpace(string a){
//     string temp = "";
//     string temp2 = "";
//     for (int i=0 ; i<a.size()+1 ; i++){
//         if((a[i] == ' ') || (a[i] == '\0')){
//             temp2.append(reverse(temp));
//             temp2.append(" ");
//             temp.clear();
//         }
//         else{
//             temp.push_back(a[i]);
//         }
//     }

//     return temp2;
// }


// int main(){
//     string s = "my name is kishan";

//     cout << searchSpace(s);
// }
 