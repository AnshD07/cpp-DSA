#include <iostream>
using namespace std;


// declation of function
int power()
{ 
    int x,y;
    cin >> x >> y;
    // Function Body

    cout << x << endl;
    int ans = 1;
    for (int i = 1; i <= y; i++)
    {
        ans = ans * x;
    }
    return ans;
}

int main()
{  
    // use of function
    cout << power();
}



// this fucntion declare without any perameter youcan see all logic in code