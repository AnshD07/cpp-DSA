#include<iostream>
using namespace std;


class animal{
    public:
        int age;
        int weight;

    public:
        void speak(){
            cout << "Barking " << endl;
        }
};

class Human{
    public:
        string color;

        void speak(){
            cout << "Speaking  " << endl;
        }
};

// Multiple Inheritance karte hai bhai
class Hybrid : public animal,public Human{

};

int main()
{

    Hybrid shubham;
    shubham.speak();

    shubham.bark();
}
