// https://leetcode.com/problems/string-compression/

class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0;
        int ansIndex = 0;
        int n = chars.size();

        while(i<n){
            int j=i+1;
            while(j<n && chars[i]==chars[j]){
                j++;
            }
            // yha kab aao ge
            // yah to vectoe pura traverse kardia 
            // yah to nya character encounter kiys hai

            // old charater ko store kardo
            chars[ansIndex] = chars[i];
            ansIndex++;

            int count = j-i;
            if(count > 1){
                // converting count into single digit and saving in answer
                string cnt = to_string(count);
                for(char ch:cnt){
                    chars[ansIndex] = ch;
                    ansIndex++;
                }
            }
            // moving to new character
            i = j;
        }

        return ansIndex;
    }
};