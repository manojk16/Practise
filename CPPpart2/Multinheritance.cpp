#include <iostream>
using namespace std;

class A
{
public:
	int x;
};
class B
{

};
class C:public A, public B//multiple Inheritance
{

};
class D:public B
{};
class E:public D
{};