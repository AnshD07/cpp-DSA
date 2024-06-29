// https://www.codingninjas.com/studio/guided-paths/basics-of-c/content/118785/offering/1381144?leftPanelTabValue=PROBLEM&customSource=studio_nav

#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout << "enter row and col :  " << endl;
    cin >> row >> col;

    // Creating 2D Array
    int **arr = new int*[row]; // making row pointer array 

    for(int i=0 ; i<row ; i++){
        arr[i] = new int[col]; // making all row array with size of col smaj me aaya kya
    }

    cout << sizeof(arr) ;



    // ye to ata hai bhai
    for(int i=0 ; i<row ; i++){
        for(int j=0 ; j<col ; j++){
            cin >> arr[i][j];
        }
    }
    for(int i=0 ; i<row ; i++){
        for(int j=0 ; j<col ; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }


    // Releasing Memory from Heap
    for(int i=0 ; i<row ; i++){
        delete [] arr[i]; // deleting all rows step by step
    }

    delete []arr; // at the end delete whole array
}