#include <iostream>
#include <typeinfo>

using namespace std;

class Base
{
public:
 // virtual void display()
    virtual ~Base() {}
};

class Derived : public Base
{
};

int main()
{
    Base* ptr = new Derived;

    cout << typeid(*ptr).name() << endl;

    delete ptr;
    return 0;
}