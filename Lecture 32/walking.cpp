#include<iostream>
using namespace std;
void reachHome(int src,int dest){
    // Base case
    if (src == dest){
        cout << "pogi gyo " << endl;
        return ;
    }

    // recursive call
    reachHome(src++,dest);

}
int main(){
    int dest = 10;
    int src = 1;

    reachHome(src,dest);
}