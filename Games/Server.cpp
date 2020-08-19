#include <iostream>

class A
{
    ~A() { printf("~A"); }
};

class B : public A
{
    ~B() { printf("~B"); }
};

int main()
{
    B *b = new B();
    delete b;

    return 0;
}