// https://www.codingninjas.com/studio/problems/aggressive-cows_1082559?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2

 

bool isPossible(vector<int> &stalls, int k,int mid , int n){
    int cowCount = 1;
    int lastpos = stalls[0];

    for(int i=0 ; i<n ;i++){
        if(stalls[i] - lastpos >= mid){
            cowCount ++;
            if(cowCount == k){
                return true;
                // if desire cows countent and also get good ditance then return true
            }
            lastpos = stalls[i]; 
            // for make large distance bertwen k cows
            // here k cows given na Firstly Dry dun then undertand
        }
    }

    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
   sort(stalls.begin(),stalls.end());
    int s = 0, n = stalls.size();
    int e = stalls[n-1];
    // search Space is minimum to maximum
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s<=e){
        if(isPossible(stalls,k,mid,n)){
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid -1;
        }

        mid = s +(e-s)/2;
    }

    return ans;
}