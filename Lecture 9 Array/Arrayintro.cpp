#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl
         << endl;
}

int main()
{
    // declare
    int number[10];

    // accessing an array
    cout << "value at 0 index : " << number[1] << endl;

    // initializing an array
    int second[3] = {7, 5, 2};

    cout << second[1] << endl
         << endl;

    int third[15] = {4, 2};
    printArray(third, 15);

    // initilizing all location with 0
    int fourth[10] = {0};
    printArray(fourth, 10);

    // initilizing all location with 1 [ Not possible with below Line]
    int fifth[10] = {23};
    printArray(fifth, 10);

    int fifthsize = sizeof(fifth) / sizeof(int);
    cout << "Size of fifth array is : " << fifthsize;
}