#include<iostream>
using namespace std;
void print(int arr[][4],int row,int col){
    for(int i=0 ; i<row ; i++){
        for(int j=0 ; j<col ; j++){
            cout << arr[i][j] << ' ' ;
        }
        cout << endl;
    }
    cout << endl;
}


// like linear search
bool ispresent(int arr[][4],int key,int row,int col){
    for(int i=0 ; i<row ; i++){
        for(int j=0 ; j<col ; j++){
           if(arr[i][j] == key){
            return 1;
           }
        }
    }
    return 0;
}


int main(){
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

    int key = 111;
    print(arr,3,4);

    cout << ispresent(arr,key,3,4) << endl;

    
}

// here we need to give col count because it need to find in linear array see the notes how 2d array store in memory

// https://stackoverflow.com/questions/12813494/why-do-we-need-to-specify-the-column-size-when-passing-a-2d-array-as-a-parameter
