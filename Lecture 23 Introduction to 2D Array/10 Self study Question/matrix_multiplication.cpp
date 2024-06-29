#include<iostream>
#include<vector>
using namespace std;

void print(int arr[][3],int row,int col){
    for(int i=0 ; i<row ; i++){
        for(int j=0 ; j<col ; j++){
            cout << arr[i][j] << ' ' ;
        }
        cout << endl;
    }
    cout << endl;
}

int main(){

    // int a[2][2]={{1,2},{3,4}};
    // int b[2][2]={{5,6},{7,8}};

    int a[3][4] = {{2,4,1,2},{8,4,3,6},{1,7,9,5}}; //s1,s2
    int b[4][3] = {{1,2,3},{4,5,6},{7,8,9},{4,5,6}}; //s2,s3
    
    int ans[3][3] = {0};

    for(int i=0 ; i<3;i++){ // i<n1
        int col2 = 0;
        while(col2<3){ // temp<n3
            // int sum = 0;
            for(int j=0 ; j<4 ; j++){ // j<n2
                ans[i][col2] += a[i][j] * b[j][col2];
            }
            col2++;
            // cout << sum << " ";
        }
        // cout << endl;
    }

    
    print(ans,3,3);

    cout << "this is ansh" << endl;
}