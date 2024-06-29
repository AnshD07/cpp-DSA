// https://www.geeksforgeeks.org/inline-functions-cpp/

#include <iostream>
using namespace std;
/* inline function work like macros it replace but only if it have one line */
inline int getMax(int a,int b){
    return a>b ? a : b ;
}
int main()
{
    int a = 1, b = 2;
    int ans = 0;
    
    ans = getMax(a,b);
    cout << ans << endl;

    a = a + 3;
    b = b + 1;

    ans = getMax(a,b);
    cout << ans << endl;
}