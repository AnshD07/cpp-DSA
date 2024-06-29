// https://www.codingninjas.com/studio/problems/sum-of-two-arrays_893186?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_4&leftPanelTabValue=SUBMISSION

// Ansh Approach
#include <bits/stdc++.h> 
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	// Write your code here.
	int sum1=0,sum2=0,total=0;
	for (int i=0 ; i<n ; i++){
		sum1 = sum1 * 10 + a[i];
	}

	for(int i=0 ; i<m ; i++){
		sum2 = sum2 * 10 + b[i];
	}

	total = sum1 + sum2 ;

	vector<int> ans;
	int num = 0;
	while(total !=0){
		num = total % 10;
		ans.push_back(num);
		total /= 10;
	}
	
	reverse(ans.begin() , ans.end());

	return ans;
}
 



// babbar sir approach

vector<int> reverse(vector<int> arr){
	int s=0;
	int e=arr.size() - 1;
	while(s<e){
		swap(arr[s++],arr[e--]);
	}

	return arr;
}


#include <bits/stdc++.h> 
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	int i = n-1;
	int j = m-1;
	int carry = 0;

	vector<int> ans;
	
	while( i>=0 && j>=0){
		int sum = a[i] + b[j] + carry;
		carry = sum / 10;
		sum = sum % 10;
		ans.push_back(sum);
		i--;j--;
	}

	// first case first row remaining 
	while( i>=0 ){
		int sum = a[i] + carry;
		carry = sum / 10;
		sum %= 10;
		ans.push_back(sum);
		i--;
	}

	// second case if second row remaining
	while( j>=0 ){
		int sum = b[j] + carry;
		carry = sum / 10;
		sum %= 10;
		ans.push_back(sum);
		j--;
	}


	// third case both row are same and carry is remaining 
	while( carry!= 0 ){
		int sum = carry;
		carry = sum / 10;
		sum %= 10;
		ans.push_back(sum);
	}

	return reverse(ans);
}