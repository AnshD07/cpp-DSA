//https://www.codingninjas.com/studio/problems/insertion-sort_3155179?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTabValue=PROBLEM

#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n)
{
    for (int i = 0; i < n; i++){
        int temp = arr[i]; 
        int j = i - 1;
 
        while (j >= 0){
            if (arr[j] > temp){
                // shift to Right side
                arr[j + 1] = arr[j];
            }
            else{
                break;
            }
            j--;
        }
        // jo arr[j] < temp thay to break kri pchi value ne vche mukvi to pdshe ne
        arr[j + 1] = temp;
    }
}

int main()
{
    int n;
    cin  >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    insertionSort(arr, n);
    cout << "sorted array is :   ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}








// #include <bits/stdc++.h> 
// void insertionSort(int n, vector<int> &arr){
//     for(int i=1 ; i<n ; i++){
//         int temp = arr[i];
//         int j = i - 1;

//         while(j >= 0){
//             if(arr[j] > temp){
//                 // shift karvanu chhe ne
//                 arr[j+1] = arr[j];
//             }
//             else{
//                 // ruk jaooooooo
//                 break;
//             }

//             j--;
//         }
//         // jo arr[j] < temp thay to break kri pchi value ne vche mukvi to pdshe ne
//         arr[j+1] = temp;
//     }
// }