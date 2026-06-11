#include <stdlib.h>
#include <stdio.h>
#include <iostream>

using namespace std;

class Test {
    public:
   void* operator new(size_t size) 
   {
    void* p = malloc(size);
    cout << size <<" bytes allocated from heap"<< endl;
    return p;  
   }
    void* operator new[](size_t size)
     {
        void* p = malloc(size*4);
        cout << size*4 <<" bytes allocated from heap"<< endl;
        return p;    
    }
 

   Test()=default;
   Test(const Test& obj)=default;
    void* operator new(size_t size) = delete;
    void* operator new[](size_t size) = delete;
};

int main()
{
   Test obj1;
   Test obj2=obj1;
   //Test* obj =new Test;                   // Valid: stack allocation
   int* ptr= new int[10];
   //Test* arr=new Test[10];               // Valid: stack allocation
    return 0;
}
