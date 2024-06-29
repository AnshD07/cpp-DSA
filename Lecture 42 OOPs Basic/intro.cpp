#include <iostream>
#include <cstring>
// #include "hero.cpp"  // including class from another file
using namespace std;

/*
Access Modifier:
public : Access out_of class also we can access it in_the_class
private : only access it in_the_class

by default class set as private
*/
class Hero
{

    // Properties
private:
    int health;

public:
    char *name;
    char level;

    static int TimeToComplete;

    // getter
    int getHealth()
    {
        return health;
    }
    char getLevel()
    {
        return level;
    }
    // setter
    void setHealth(int h)
    {
        // any condition lagava mate
        health = h;
    }
    void setLevel(char ch)
    {
        level = ch;
    }
    void setName(char name[])
    {
        strcpy(this->name, name);
    }

    void print()
    {
        cout << endl
             << "[ name : " << this->name << ", ";
        cout << "level : " << this->level << ", ";
        cout << "health : " << this->health << " ]" << endl;
    }

    // Default Constructer
    Hero()
    {
        name = new char[100]; // jyare object create thay tyare j memory allocate thay ne
        cout << "Simple Constructer Called !!!!!!!!" << endl;
    }

    // why i am not enough for do exercise what i do i am so worry about that think and this is not good enough for me

    // Paramertereisd Constructer
    Hero(int health)
    {
        cout << "this  : " << this << endl;
        this->health = health; // here this store address of current object health is element of object
    }

    Hero(int health, char level)
    {
        this->health = health;
        this->level = level;
    }

    // Copy Constructer
    Hero(Hero &temp)
    { // this is use of deep copy

        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;

        cout << "copy constructer called :)  :)" << endl;
        (*this).health = temp.health;
        (*this).level = temp.level; // for understandig this is pointer that store address of current object
    }

    // Destructer
    ~Hero()
    {
        cout << "Destructer bhai called !!!!!!!!!!!!!!!!!!!!!!!!" << endl;
    }

    // Static function only accepts static member or data memeber
    static void random()
    {
        cout << "form Static function : " << TimeToComplete << endl;
    }
};

int Hero ::TimeToComplete = 15;

int main()
{

    Hero::random();

    // Hero ramesh;

    // cout << "This is Static Keyword : " <<  Hero::TimeToComplete << endl; // both are valid but this is good practice for us
    // cout << ramesh.TimeToComplete << endl;

    // // Static
    // Hero a;

    // // Dynamically
    // Hero *b = new Hero();
    // // manullay destructer called
    // delete b;

    /*
        Hero hero1;
        hero1.setHealth(12);
        hero1.setLevel('A');
        char name[5] = "Ansh";
        hero1.setName(name);

        // hero1.print();

        // use default copy constructer

        Hero hero2(hero1);
        // hero2.print();

        hero1.name[0] ='r'; // here name goes with pointer so both point same address
        hero1.level = 'C';


        hero1.print();
        hero2.print();

        hero1 = hero2; // copy assignment operator
        hero1.print();
        hero2.print();

    */

    /*

        // copyconsructer

        Hero S(70,'C');
        S.print();

        Hero R(S); // create object R and copy data membar of S in R
        R.print();

    */

    /*

        // object created succesfully
        Hero ramesh(19);
        cout << "address of ramesh : " << &ramesh << endl;
        ramesh.getHealth();

        // dynamically
        Hero *raj = new Hero();


        Hero temp(22,'C');
        temp.print();


    */

    /*

        // Static Allocation
        Hero a;
        a.setHealth(80);
        // a -> setHealth(80); // it is only valid for pointer okay
        a.setLevel('B');
        cout << "level is " << a.level << endl;
        cout << "helath is "<< a.getHealth() << endl;


        // Dynamic Allocation
        Hero *b = new Hero;

        b -> setHealth(100);
        b -> setLevel('A');

        cout << "level is : " << (*b).level << endl;
        cout << "helath is : " << (*b).getHealth() << endl;

        cout << "level is : " << b->level << endl;
        cout << "helath is : " << b->getHealth() << endl;

    */

    // Creation of Object
    // Hero ramesh;

    // cout <<  ramesh.getHealth() << endl;
    // // ramesh.health = 80;
    // ramesh.level = 'A';

    // ramesh.setHealth(90);

    // cout << "health is now : " << ramesh.getHealth() << endl;
    // cout << "level is  : " << ramesh.level << endl;
    // cout << "size : " << sizeof(ramesh) << endl;

    // ramesh.print();
}