// https://www.naukri.com/code360/problems/subsequences-of-string_985087?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_16

#include<iostream>
using namespace std;
#include <bits/stdc++.h> 
void solve(string str,string output,int index, vector<string> &ans){
	// Base case
	
	if(index >= str.length()){

		if(output.length() > 0){
			ans.push_back(output);
		}
		
		return ;
	}

	// exclude karvu chhe bhai
	solve(str,output,index + 1 , ans);

	// include karva mate
	char ch = str[index];
	output.push_back(ch);
	solve(str,output,index+1,ans);
}

vector<string> subsequences(string str){
	
	// Write your code here
	vector<string> ans;
	string output = "";
	int index = 0;

	solve(str,output,index,ans);

	return ans;
}

int main(){
	string a ="abc";

	vector<string> ans;
	ans = subsequences(a);

	for (const string& s : ans) {
        cout << s << endl;
    }


}
