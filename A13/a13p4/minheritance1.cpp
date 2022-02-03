/*
CH-230-A
a13p4.cpp
Aditya Ojha
ad.ojha@jacobs-university.de
*/

#include <iostream>
using namespace std;

/*running the code without correction gives the error 
non-static member 'print' found in multiple base-class 
subobjects of type 'A'*/
/*the error appears because the print function "d.print()"
would be unclear as D class can have the function coming 
from two different childrens of A which is B or C*/
/*virtually inheriting from the classes will remove the
ambiguity and the compiler knows even when d.print() is
called and returns the setted value of 20*/
class A
{
  int x;

public:
  void setX(int i) { x = i; }
  virtual void print() { cout << x; }
};

class B : virtual public A /*adding virtual*/
{
public:
  B() { setX(10); }
};

class C : virtual public A /*adding virtual*/
{
public:
  C() { setX(20); }
};

class D : public B, public C
{
};

int main()
{
  D d;
  d.print();
  return 0;
}
