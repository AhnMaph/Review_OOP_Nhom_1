#include <iostream>
using namespace std;

class A
{
private:
    int x;

public:
    A(int t) : x(t) {}
    A() : x(0) {}     

    void f()
    {
        cout << x;
    }

    int f2()
    {
        return x;
    }
};

int main() 
{
    A a(10);       
    cout << a.f2(); 
    return 0;
}
