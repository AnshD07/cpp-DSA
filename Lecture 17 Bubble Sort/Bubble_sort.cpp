// https://www.codingninjas.com/studio/problems/bubble-sort_980524?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2


#include <bits/stdc++.h>
void bubbleSort(vector<int> &arr, int n)
{

   for(int i=0 ; i<n-1 ; i++){
       // Round 1 to n-1
       int swapped = false;
       
       for(int j=0 ; j<n-i-1 ; j++){
           if(arr[j] > arr[j+1]){
               swap(arr[j] , arr[j+1]);  
               swapped = true;    
           }
       }

       if(swapped == false){
           break;
       }
   }

//    for(int i=1 ; i<n ;i++){
//        int swapped = false;
//        for(int j=0 ; j<n-i ; j++){
//            if(arr[j] > arr[j+1]){
//                swap(arr[j],arr[j+1]);
//                !swapped;
//            }
//        }

//        if(swapped == false){
//            break;
//        }
//    }


}
