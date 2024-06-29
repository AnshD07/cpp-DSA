#include <iostream>

using namespace std;

int main()
{
    int amount = 1330;
    int n = 1;
    int note;
    switch (n){
        case 1:
            note = amount / 100;
            amount = amount - (note * 100);
            cout << note << "  Notes Requird of 100 ruppes" << endl;
        case 2:
            note = amount / 50;
            amount = amount - (note * 50);
            cout << note << "  Notes Requird of 50 ruppes" << endl;
        case 3:
            note = amount / 20;
            amount = amount - (note * 20);
            cout << note << "  Notes Requird of 20 ruppes" << endl;
        case 4:
            note = amount / 1;
            amount = amount - (note * 1);
            cout << note << "  Coins Requird of 1 ruppes" << endl;
    }
}