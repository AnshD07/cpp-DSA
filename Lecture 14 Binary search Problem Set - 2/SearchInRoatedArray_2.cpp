// https://www.codingninjas.com/studio/problems/search-in-rotated-sorted-array_1082554?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2

/*
This code credit goes to coding ninjas sir who teach another approach
*/

int search(vector<int> &arr, int n, int k){
    // Write your code here.
    // Return the position of K in ARR else return -1.
    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e){

        if (arr[mid] == k){
            ans = mid;
            break;
        }

        // which side is sorted

        // whether left side is sorted
        else if (arr[mid] >= arr[s])
        {
            if (k >= arr[s] && k <= arr[mid])
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }

        // whether right side is sorted
        else if (arr[mid] <= arr[s])
        {
            if (k >= arr[mid] && k <= arr[e]){
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
        // for understanding i write here else if

        mid = s + (e - s) / 2;
    }
    return ans;
}