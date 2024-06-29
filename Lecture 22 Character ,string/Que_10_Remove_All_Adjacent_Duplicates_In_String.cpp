// https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/description/



// 2500+ ms Runtime

class Solution {
public:
    string removeDuplicates(string s) {
        int i=0;
        while(i<s.length()){
            if(i+1 < s.length()){
                if(s[i]==s[i+1]){
                    s.erase(i,2);
                    i=0;
                    continue;
                }
            }
            i++;
        }

        return s;
    }
};


// 50ms Runtime
class Solution {
public:
    string removeDuplicates(string s) {
        int i=0;
        while(i<s.length()){
            if(s[i]==s[i+1]){
                s.erase(i,2);
                if(i>0){
                    i--;
                } 
            }
            else{
                i++;
            }
        }

        return s;
    }
};