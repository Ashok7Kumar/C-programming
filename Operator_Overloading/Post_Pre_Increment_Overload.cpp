#include <iostream>
using namespace std;

class Integer
{
    int *m_p;

public:
    Integer(int value = 0)
    {
        m_p = new int(value);
    }

    Integer(const Integer& other)
    {
        m_p = new int(*other.m_p);
    }

    ~Integer()
    {
        delete m_p;
    }

    Integer& operator++() // pre increment
    {
        ++(*m_p);//++3
        return *this; //4
    }

    Integer operator++(int) // post increment
    {
        Integer temp(*this); //temp=3
        ++(*m_p); //++3 =4
        return temp; //3
    }

    void display()
    {
        cout << *m_p << endl;
    }
};

int main()
{
    Integer a(10);

    cout << "Pre Increment\n";

    Integer b = ++a; // a.operator++

    a.display(); // 11
    b.display(); // 11

    cout << "\nPost Increment\n";

    Integer c = a++;  //a.operator++(0)

    a.display(); // 12
    c.display(); // 11

    return 0;
}