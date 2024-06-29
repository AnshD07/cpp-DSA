#include<iostream>
using namespace std;

class Human{

    private:
       int height;

    // protected:
    //     int height;

    public:
        // int height;
        int weight;
        int age;

        int getAge(){
            return this-> age;
        }
        void setWeight(int w){
            this-> weight = w;
        }

};

// here inheritance work Male class inheritant Human class 
class Male : protected Human{

    public:
        string color;

        void sleep(){
            cout << "male are resting :) " << endl;
        }
        int getHeight(){
            return this-> height;
        }
};

int main(){


    Male m1;

    cout << m1.getHeight() << endl;
    cout << m1.height << endl;

    // Male object1;

    // object1.setWeight(82);
    
    // cout << object1.age << endl;
    // cout << object1.height << endl;
    // cout << object1.weight << endl;

    // cout << object1.color << endl;
    // object1.sleep();
}