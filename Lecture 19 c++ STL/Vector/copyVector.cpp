#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v1;

 
    for (int i =1 ; i<11 ; i++){
        v1.push_back(i);
    }



    vector<int> second(v1);  // this is will copy v1 vector into second vector

    second.push_back(121232);
 
    for(int i:second){
        cout << i << " " ; 
    }

}