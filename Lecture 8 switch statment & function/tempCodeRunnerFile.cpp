#include <bits/stdc++.h>

vector<vector<int>> findTriplets(vector<int> arr, int n, int K) {

  vector<vector<int>> ans; 
  set<vector<int>> temp; 
  sort(arr.begin(), arr.end()); 
  for (int i = 0; i < n - 2; i++) { 
    int mid = i + 1, high = n - 1; 
    while (mid < high) {

      if (arr[mid] + arr[i] + arr[high] == K) {

        temp.insert(
            {arr[mid], arr[i], arr[high]}); // insert in array to remove duplicates
      }

      if (arr[mid] + arr[i] + arr[high] > K) { 
        high--; 
      } else { 
        mid++;
      }
    }
  }

  // Iterate over the set and push the values in the array.

  for (auto i : temp) {

    ans.push_back(i);
  }

  return ans;
}