#include<iostream>
using namespace std;


class animal{
    public:
        int age;
        int weight;

    public:
        void speak(){
            cout << "speaking " << endl;
        }
};


class Dog: public animal{
    
};

class GermanShephar : public Dog{

};
// this is example of multilevel inheritance

int main()
{

    Dog sheru;

    GermanShephar oreo;



    sheru.speak();

    oreo.speak();

}