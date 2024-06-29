// #include<iostream>
// using namespace std;
// int factorial(int n){
//     if(n==1){
//         return 1;
//     }

//     // Second relation called recursive Relation
//     return n * factorial(n-1);
// }
// int main(){
//     cout << factorial(5) << endl;
// }




#include<iostream>
using namespace std;
int Power(int n){
    
    // Base Case
    if(n==0){
        return 1;
    }

    // Recursive Relation
    int smallerProblem = Power(n-1);
    int biggerProblem = 2 * smallerProblem;
    return biggerProblem;
    // return 2 * Power(n-1);

    // here not have that much procession in recursion
}

int main(){
    int n = 5;
    cout << Power(n) << endl;
}