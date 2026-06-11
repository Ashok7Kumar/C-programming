#include <iostream>
using namespace std;

class Derived;

class Base
{
private:
    int x;

public:
    Base(int val=0) : x(val) {}

    friend void show(Derived&);
};

class Derived : public Base
{
private:
    int y;

public:
    Derived(int a, int b) : Base(a), y(b) {}
};

void show(Derived& d)
{
    cout << d.x << endl;   // works
    //cout << d.y<< endl;  //error
}

int main()
{
    Derived d(10, 20);
    show(d);

    return 0;
}