#include <iostream>
using namespace std;
class Base
{

public:
    ~Base()
    {
        cout << "Calling ~Base()" << endl;
    }
};
 
class Derived: public Base
{
private:
    int* m_pnArray;
 
public:
    Derived(int nLength)
    {
        m_pnArray = new int[nLength];
    }
 
    ~Derived() // note: not virtual
    {
        cout << "Calling ~Derived()" << endl;
        delete[] m_pnArray;
    }
};
 
int main()
{
    Derived *pDerived = new Derived(5);
    Base *pBase = pDerived;
    delete pBase;
 
    return 0;
}

/*Because pBase is a Base pointer, when pBase is deleted, the program looks to see if the Base destructor is virtual. It’s not, so it assumes it only needs to call the Base destructor. We can see this in the fact that the above example prints:

Calling ~Base()

However, we really want the delete function to call Derived’s destructor (which will call Base’s destructor in turn). We do this by making Base’s destructor virtual:
*/
