#include<iostream>
#include<vector>
using namespace std;
int main(){
    int row;
    cin >> row;

    // making 2d array in dynamic memory
    int **arr = new int*[row];

    int col;
    vector<int> size;

    for(int i=0 ; i<row ; i++){
        cin >> col;
        size.push_back(col);

        arr[i] = new int[col]; // first take how many col want to make

        for(int j=0 ; j<col ; j++){ // take element of column
            cin >> arr[i][j];
        }
    }

    cout << endl;
    for(int i=0 ; i<row ; i++){
        for(int j=0 ; j< size[i] ; j++){
            cout << arr[i][j] << " ";
        }cout << endl;
    }



    // release memory
    for(int i=0 ; i<row ; i++){
        delete []arr[i];
    }
    delete []arr;


    // after releaseing memory here not have any value only have garbage value
    for(int i=0 ; i<row ; i++){
        for(int j=0 ; j< size[i] ; j++){
            cout << arr[i][j] << " ";
        }cout << endl;
    }
}