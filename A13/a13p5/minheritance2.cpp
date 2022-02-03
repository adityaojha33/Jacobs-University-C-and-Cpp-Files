/*
CH-230-A
a13p5.cpp
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include<iostream>
using namespace std;
/*running the code without correction gives the error
implicit default constructor for D must explicitly initialize
the class A*/
/*So when d.print() is carried out the default
constructor needs to be called of A(grandparent)
but is no explicitly define default constructor from 
D which gives the error. */
/*adding the constructor in class D just like in C solves
the problem as the constructor is explicitly declared in D- the
grandchild of A*/
class A
{
  int x;
public:
  A(int i) { x = i; }
  void print() { cout << x; }
};
 
class B: virtual public A
{
public:
  B():A(10) {  }
};
 
class C:  virtual public A 
{
public:
  C():A(10) {  }
};
 
class D: public B, public C {
  public:
   D():A(10) {  } /*explicitly defing the constructor*/
};
 
int main()
{
    D d;
    d.print();
    return 0;
}
