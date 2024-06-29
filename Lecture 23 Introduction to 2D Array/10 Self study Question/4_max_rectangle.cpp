// https://www.geeksforgeeks.org/problems/max-rectangle/1

// for this we need to learn Dynamic programming


#include<iostream>
using namespace std;

int maxArea(int M[][4], int n, int m) {
        
        int maxi = -1;
        int rowCount = 0;
        for (int i=0 ; i<n ; i++){
            int count = 0;
            
            for(int j=0; j<m ; j++){
                if(M[i][j] == 1){
                    count++;
                }
            }
            
            
            if(count == maxi){
                rowCount ++;
            }
            
            if(count > maxi){
                maxi = count;
                rowCount = 1;
            }
        }
        
        return rowCount * maxi;
    }

int main(){

    int arr[4][4]= {};

    for(int i=0 ; i<4 ; i++){
        for(int j=0 ; j<4 ;j++){
            cin >> arr[i][j] ;
        }
    }

    cout << maxArea(arr,4,4);
}