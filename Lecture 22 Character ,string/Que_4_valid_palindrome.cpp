// https://leetcode.com/problems/valid-palindrome/description/

class Solution {
private:
bool isvalid(char a){
    if((a>='a' && a<='z') || (a>='0'&&a<='9') || (a>='A' && a<='Z')){
        return 1;
    }
    return 0;
}

char toLowercase(char a){
    if(a>='a' && a<='z'){
        return a;
    }else{
        char temp = a - 'A' + 'a';
        return temp;
    }
}

bool palindrome(string a){
    int s=0;
    int e=a.size()-1;
    
    while(s<=e){
        if(toLowercase(a[s]) != toLowercase(a[e])){
            return 0;
        }else{
            s++;
            e--;
        }
    }
    return 1;
}


public:
    bool isPalindrome(string s) {
        // faltu character htane hai
        string temp={};
        for (int i=0 ; i<s.size() ; i++){
            if(isvalid(s[i])){
                temp.push_back(s[i]);
            }
        }

        return palindrome(temp);

    }
};