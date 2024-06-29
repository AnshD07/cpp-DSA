#include <iostream>
using namespace std;

int firstcount(int a)
{
    int count = 0;
    while (a != 0)
    {
        if(a&1){
            count ++;
        }
        a = a >> 1;
    }
    return count;
} 

int main()
{
    int a,b;
    cin >> a >> b;

    cout << "The Total Number of Set Bits is : " << firstcount(a) + firstcount(b); 
}