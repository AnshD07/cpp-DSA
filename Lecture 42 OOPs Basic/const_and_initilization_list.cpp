#include <iostream>
using namespace std;

class test
{
private:
    int value;

public:
    test(int t = 0)
    {
        value = t;
    };

    int getValue(int v) const
    { // const value function
        // value ++; // it give error we cant change any keyword in const function related to clas
        return value;
    }

    void setValue(int val)
    {
        this->value = val;
    }

    void type()
    {
        cout << "i am inside type function" << endl;
    }

    void r() const
    {
        cout << "i am inside r funciton" << endl;
    }
};

void foo(const int x)
{
    cout << x << endl;
}

const int foo2(int a)
{
    a = 100;

    return a;
}

int main()
{
    const test ansh;
    ansh.type();

    // int a = 8;
    // const int *q = &a;
    // cout << *q << endl;

    // a = 4;
    // cout << *  q << endl;
    // int *t = &a;
    // t = t+1;
    // q = =q+1;

    // foo(3);

    // cout << foo2(4) << endl;
    // int a = foo2(4);
    // a++;
    // cout << a;
}