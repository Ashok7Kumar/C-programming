
#include <iostream>
using namespace std;

class Point {
    int x, y;

public:
    Point(int a = 0, int b = 0) : x(a), y(b) {
      cout << "constructor called"<<endl;   
    }

    // Overload the + operator
    Point operator+( Point& other) //other=p2
    {
        cout << "this->x :"<<this->x<<endl; //p1.x,this pointer pointing to p1
        cout << "other.x :"<<other.x<<endl; //p2.x =4
        Point p4; //p1.x+p2.x
        p4.x=this->x + other.x;
        p4.y=this->y + other.y;
        return p4;
    }

    void display() const {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    int i1=10,i2=20;
    int res=i1+i2; //i1 +
    Point p1(2, 3);
    Point p2(4, 5);
    // obj.func(arg);
    Point p3= p1 + p2;  //  p1 + =function_calloperator+(p2) ,p1.fun(p2)
     //fun(arg)

    cout << "p1 + p2 = ";
    p3.display();

    return 0;
}

