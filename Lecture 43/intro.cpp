#include<iostream>
#include<cstring>
// #include "hero.cpp"  // including class from another file
using namespace std;


/*
Access Modifier:
public : Access out_of class also we can access it in_the_class
private : only access it in_the_class

by default class set as private
*/
class student{
    private:
        string name;
        int age;
        int height;
    public:
        int getAge(){
            return this-> age;
        }
       
};



int main(){


    student ansh;
    cout << ansh.getAge();
}