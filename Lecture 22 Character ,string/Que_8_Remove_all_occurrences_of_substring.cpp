// https://leetcode.com/problems/remove-all-occurrences-of-a-substring/description/


#include <iostream>
using namespace std;
int main(){
    string s1="ansh dholakiya";
    string s2 ="b";

    cout << s1.find(s2) << endl; // give first occurence in output

    s1.erase(1,4);   //remove from index 0 to 4 step
    cout << s1 << endl;
}

// class Solution {
// public:
//     string removeOccurrences(string s, string part) {
//         // part no mle to moti valur return kre je s.length karta moti hoy
        
//         while(s.length() != 0 && s.find(part) < s.length()){
//             s.erase(s.find(part),part.length());
//         }
//         return s;
//     }
// };


class Solution {
public:
    string removeOccurrences(string s, string part) {
        while( s.find(part) < s.length()){
            s.erase(s.find(part) , part.length());
        }

        return s;
    }

};