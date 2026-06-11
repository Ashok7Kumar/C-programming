#include <iostream>
using namespace std;

class Integer {
public:
    int* m_p;

    // Default Constructor
    Integer() : m_p(new int(0)) {}

    // Parameterized Constructor
    Integer(int p) : m_p(new int(p)) {}

    // Copy Constructor
    Integer(const Integer& other) : m_p(new int(*other.m_p)) {}

    // Destructor
    ~Integer() {
        delete m_p;
    }

    // Overloading the << operator to print the value
    friend ostream& operator<<(ostream& os, const Integer& obj) {
         cout<< "overloading << operator"<<endl;
        os << *(obj.m_p);
        return os;
    }

    // Overloading ++ pre-increment operator as a member function
    Integer& operator++() {
        cout<< "overloading ++ pre-increment operator"<<endl;
        ++(*m_p); // Pre-increment the value pointed to by m_p: ++(3)
        return *this; // Return the current object by reference
    }
};

int main() {
    Integer a(3);
    int b=10;
    cout << (++b);
    cout << (++a) << endl;  // Output should be 4

    return 0;
}
