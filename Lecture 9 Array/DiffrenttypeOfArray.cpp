#include <iostream>
using namespace std;

void printArray(char c[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << c[i] << endl;
    }
}

int main()
{
    char ch[5] = {'a','b','c','d','e'};
    printArray(ch,5);
    // cout << ch[0] << endl;
}