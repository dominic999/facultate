#include <iostream>
using namespace std;
class A {
public:
    A () {cout << "A";}
    ~A () {cout << "~A";}
};
class B: public A {
public:
    B () {cout << "B";}
    virtual ~B () {cout << "~B";}
};
class C: public B {
public:
    C () {cout << "C";}
    ~C () {cout << "~C";}
};
int main () {
    B *pa = new C(); delete pa;
    return 0;
}
