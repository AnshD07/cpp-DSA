#include<iostream>
#include<vector>
using namespace std;
 bool areRotations(string s1,string s2)
    {
        // Your code here
        int k = 0;
        int size = s1.length();
        vector<char> temp;
        while(k < size){
            for(int i=0 ; i<size ; i++){
                int rotatedIndex = (i+k) % size;
                temp[rotatedIndex] = s1[i];
            }
            string str = "";
            for(int i=0 ; i<temp.size() ; i++){
                str.push_back(temp[i]);
            }
            
            if(str == s2){
                return 1;
            }
            // str.clear();
            temp.clear();
            k++;
        }
        return 0;
        
    }
int main(){
    cout << areRotations("geeksforgeeks","forgeeksgeeks");
}