// https://leetcode.com/problems/permutation-in-string/description/

class Solution {
private:
    
    bool checkEqual(char a[26],char b[26]){
        for(int i=0 ; i<26 ; i++){
            if(a[i] != b[i]){
                return 0;
            }
        }
        return 1;
    }

public:
    bool checkInclusion(string s1, string s2) {
        char count1[26] = {0};
        for(int i=0 ; i<s1.length() ; i++){
            int index = s1[i] - 'a';
            count1[index]++;
        }


        int windowsSize = s1.length();
        char count2[26] ={0};
        for(int i=0 ; i<s2.length() ; i++){
            int index = s2[i]-'a';
            count2[index]++;

            if((i-windowsSize)>=0){
                char oldChar = s2[i-windowsSize];
                index = oldChar - 'a';
                count2[index]--;
            }

            if(checkEqual(count1,count2)) return 1;
        }

        return 0;
    }
};

    

// babar sir solution

// https://leetcode.com/problems/permutation-in-string/description/

class Solution {
private:
    
    bool checkEqual(int a[26],int b[26]){
        for(int i=0 ; i<26 ; i++){
            if(a[i] != b[i]){
                return 0;
            }
        }
        return 1;
    }

public:
    bool checkInclusion(string s1, string s2) {
        int count1[26] = {0};
        // substring character count
        for(int i=0 ; i<s1.length() ; i++){
            int index = s1[i] - 'a';
            count1[index]++;
        }

        // traverse s2 string in window of s1 length and index should be in range s2.length
        int windowsSize = s1.length();
        int count2[26] ={0};
        int i=0;

        // running for first window
        while(i<windowsSize && i<s2.length()){
            int index = s2[i] - 'a';
            count2[index]++;
            i++;
        }

        if(checkEqual(count1,count2)){
            return 1;
        }

        // age windwo process kro
        while(i<s2.length()){
            // new character add
            char newChar = s2[i];
            int index = newChar - 'a';
            count2[index]++;

            // old character been remove
            char oldChar = s2[i - windowsSize];
            index = oldChar - 'a';
            count2[index]--; 


            if(checkEqual(count1,count2))
                return 1;
            i++;
        }
        return 0;
    }
};