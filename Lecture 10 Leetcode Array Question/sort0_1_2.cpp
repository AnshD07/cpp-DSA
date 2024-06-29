// https://www.codingninjas.com/studio/problems/sort-0-1-2_631055?source=youtube&campaign=LoveBabbar_Codestudiovideo1&utm_source=youtube&utm_medium=affiliate&utm_campaign=LoveBabbar_Codestudiovideo1


#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

// Printnting array
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sort012(int *arr, int n)
{
   int s=0,m=0;
   int e =n-1;

   while(m<=e){
       if(arr[m]==1){
           m++;
       }
       else if(arr[m]==0){
           swap(arr[m],arr[s]);
           m++;
           s++;
       }
       else if(arr[m]==2){
           swap(arr[m],arr[e]);
           e--;
       }
   }


}