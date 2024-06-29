#include <iostream>
using namespace std;
int main()
{
    int f;
    cout << "Enter Fehranheit Value of Room Temp :  ";
    cin >> f;

    float c = (f - 32.0) * 5.0 / 9.0;

    cout << c;
}
// °C = (°F - 32) × 5/9