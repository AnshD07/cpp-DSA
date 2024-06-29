#include <iostream>
using namespace std;

// this is called function overloading

class A
{
public:
    void sayHello()
    {
        cout << "hello ansh dholakiya " << endl;
    }

    void sayHello(string a)
    {
        cout << "hi " << endl;
    }

    int sayHello(int q)
    {
        return 1;
    }
};

class B
{
public:
    int a;
    int b;

    int add()
    {
        return a + b;
    }

    // operator overloading
    void operator+(B &obj)
    {
        /*
        int value1 = this-> a;
        int value2 = obj.a;

        cout << "output is  " << value2 - value1 << endl;
        */

        cout << "Heloo ansh dholakiya how are you ? "<< endl;
    }

    void operator()(){
        cout << "Hu Bracket chhu bhai  " << this->a <<  endl;
    }

};



class Animal{
    public:
        void speak(){
            cout << "From animal speaking " << endl;
        }
};

class Dog: public Animal{
    public:
        void speak(){
            cout << "from dog barking " << endl;
        }
};

int main()
{

    Dog obj;
    obj.speak();
    obj.Animal::speak();








/*

    B obj1, obj2; // making two object
    obj1.a = 4;
    obj2.a = 7;

    obj1 + obj2; // we can change process of pluse operator

    obj1();
  */
}