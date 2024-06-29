// // https://www.geeksforgeeks.org/problems/maximum-occuring-character-1587115620/1


#include<iostream>
#include<string>
using namespace std;

char maxOcc(string s){
    int apha[26] = {0};

    for(int i=0 ; i<s.length() ; i++){
        int number = s[i] - 'a';
        apha[number]++;
    }

    int maxi = -1,ans=0;

    // iterate in aphabates count array
    for(int i=0 ; i<26 ; i++){
        if(maxi < apha[i]){
            maxi = apha[i];
            ans = i; // store index 
        }
    }

    return ans+'a';
}

int main(){
    string s="tests";
    cout << maxOcc(s) << endl;

}



// class Solution
// {
//     public:
//     //Function to find the maximum occurring character in a string.
//     char getMaxOccuringChar(string str)
//     {
//         int arr[26] = {0};
        
//         for(int i=0 ; i<str.length() ; i++){
//             int charIndex = str[i] - 'a';
//             arr[charIndex] ++;
//         }
        
        
//         int maxi =-1;
//         int maxOccIndex = 0;
//         for(int i=0 ; i<26; i++){
//             if(arr[i] > maxi){
//                 maxi = arr[i];
//                 maxOccIndex = i;
//             }
//         }
        
//         char finalans = maxOccIndex + 'a';
        
//         return finalans;
//     }

// };






