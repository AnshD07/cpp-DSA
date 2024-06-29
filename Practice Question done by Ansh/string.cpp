// count and say
//https://leetcode.com/problems/count-and-say/description/
class Solution {
private:
    string say(string a){
        if(a == "1") return "11"; 

        int count = 1;
        string ans = "";

        for(int i = 0; i<a.size()-1 ; i++){
            if(a[i] == a[i+1]){
                count++;
            }
            else{
                ans += to_string(count) + a[i];
                count = 1;
            }
        }
        ans += to_string(count) + a[a.length()-1];

        return ans;
    }
public:
    string countAndSay(int n) {
        // loop method brut force approach
        // 0ms time complesity
        string temp = "1";
        for(int i=1 ; i<n ; i++){
            temp = say(temp);
        }
        return temp;
    }
};