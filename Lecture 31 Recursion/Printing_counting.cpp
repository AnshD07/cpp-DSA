#include<iostream> // printing counting of given number
using namespace std;


void counting(int n){
    // Base case
    if(n==0) return ;


    // Recursive Relation
    counting(n-1);
  
    // Proceese 
    cout << n << " " ;

}
// Head recursion called because it Recursive Relation at the end

int main(){
    int n = 10;

    counting(n);
    
}