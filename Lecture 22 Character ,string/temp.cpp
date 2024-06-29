#include<iostream>
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
