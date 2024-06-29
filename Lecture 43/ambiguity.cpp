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

class Hybrid : public animal,public Human{

};

int main()
{

    Hybrid shubham;
    // shubham.speak(); // here ambiguity error should be generated

    shubham.Human::speak(); // use of scope resolution operator

    shubham.animal::speak();

    // specific class function we can call with same function name

}
