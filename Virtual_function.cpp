
#include <iostream>
using namespace std;

class Box {
private:
    double width;

public:
    // Constructor
    Box(double w) : width(w) {}
    void print();// member function
    // Friend function declaration
    friend void printWidth(Box box);
};

void  Box::print()
{
 cout << "Print function"<< endl;
}   

// Friend function definition
void printWidth(Box box) {
    cout << "Width of the box: " << box.width << endl;
}

int main() {
    Box box(10.0);

    // Use friend function
    printWidth(box);

    return 0;
}

