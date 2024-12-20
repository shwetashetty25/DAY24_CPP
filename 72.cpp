#include <iostream>
using namespace std;

// Base class
class Base
{
public:
    void displayBase()
    {
        cout << "This is Base class." << endl;
    }
};

// Derived1 inherits Base (Single Inheritance)
class Derived1 : public Base
{
public:
    void displayDerived1()
    {
        cout << "This is Derived1 class." << endl;
    }
};

// Another Base class
class Base2
{
public:
    void displayBase2()
    {
        cout << "This is Base2 class." << endl;
    }
};

// Derived2 inherits both Base and Base2 (Multiple Inheritance)
class Derived2 : public Base, public Base2
{
public:
    void displayDerived2()
    {
        cout << "This is Derived2 class." << endl;
    }
};

int main()
{
    Derived1 obj1; // Object of Derived1
    Derived2 obj2; // Object of Derived2

    // Access methods through obj1 (Single Inheritance)
    obj1.displayBase();
    obj1.displayDerived1();

    // Access methods through obj2 (Multiple Inheritance)
    obj2.displayBase();
    obj2.displayBase2();
    obj2.displayDerived2();

    return 0;
}