#include<iostream>
using namespace std;

int main(){

    int arr[3][4];
    
/*
    // taking input -->  Row wise input
    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<4 ;j++){
            cin >> arr[i][j] ;
        }
    }
*/


/*
    // taking input -->  Column wise input
    for(int i=0 ; i<4 ; i++){
        for(int j=0 ; j<3 ;j++){
            cin >> arr[j][i] ;
        }
    }
*/


    // int arr2[3][4]={1,2,3,4,5,6,7,8,10,9,11,14};
    int arr2[3][4] = {{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};


    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<4;j++){
            cout << arr2[i][j] << " " ;
        }
        cout << endl;
    }

}
