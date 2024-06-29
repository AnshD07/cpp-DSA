// https://leetcode.com/problems/letter-combinations-of-a-phone-number/


class Solution {
private:
    void solve(string digit,string output,int index,string mapping[],vector<string> &ans){
        // Base Case
        if(index >= digit.length()){
            if(output.length() > 0){
                ans.push_back(output);
            }
            return ;
        }

        int number = digit[index] - '0';
        string a = mapping[number];

        for(int i=0 ; i < a.length() ; i++){
            output.push_back(a[i]);
            solve(digit,output,index+1,mapping,ans);
            output.pop_back(); // because we are running loop so backtracking is important for it
        }
        
    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        int index = 0;
        string output = "";
        string mapping[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

        solve(digits,output,index,mapping,ans);
        return ans;
    }
};