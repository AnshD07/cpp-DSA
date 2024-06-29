//  https://www.codingninjas.com/studio/problems/cooking-ninjas_1164174?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2

#include <bits/stdc++.h> 

bool isPossible(vector<int> &rank, int m , int mid){
  int time = 0;
  int dish = 0;

  for(int i=0 ; i<rank.size();i++){
    time= rank[i];
    int j = 2;
    while(time <= mid){
      dish++;
      time += (rank[i] * j); //  Every time check 2R,3R,4R,5R
      j++; // increment of 2,3,4,5,6
    }

    if(dish >= m) {
      return true;
    }
  }
  return false;
}

int minCookTime(vector<int> &rank, int m)
{
   int s = 0;
   int e = INT_MAX;
  //  last element we can take anything it only for finding search space
  
  //  for(int i=0 ; i<m ; i++){
  //    e += rank[0] * (i+1);
  //  }
   int mid = s + (e-s)/2 , ans = -1;

   while(s <= e){
     if(isPossible(rank,m,mid)){
       ans = mid;
       e = mid - 1;
     }
     else
     {
       s = mid + 1;
     }
     mid = s + (e-s)/2;
   }

   return ans;
}


int minCookTime(vector<int> &rank, int m) {
  int s = 0;
  int e = 0;

  for (int i = 0; i < m; i++) {
    e += rank[0] * (i + 1);
  }

  int mid = s + (e - s) / 2,ans = -1;

  while (s <= e) {

    if (isPossible(rank, m, mid)) {
      ans = mid;
      e = mid - 1;
    } 
    else
    {
      s = mid + 1;
    }
    mid = s + (e - s) / 2;
  }
  return ans;
}
