//============================================================================
// Name        : ConstructorAndMemory.cpp
// Author      : Manoj
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdint>
#include <cstring>
using namespace std;

class Test {
	static const int size = 100;
	int *m_pbuffer;
	string name;
public:
	Test() {
		m_pbuffer = new int[size];
		memset(m_pbuffer, 0, sizeof(int) * size);
	}
	Test(int i) {
		cout << "Parameterized Constructor" << endl;
		m_pbuffer = new int[size] { };
		for (int i = 0; i < size; i++) {
			m_pbuffer = 7 * i;
		}

	}
	Test(const Test& other) {
		cout << "Copy Constructor" << endl;
		m_pbuffer = new int[size] { };
		memcpy(m_pbuffer, other.m_pbuffer, sizeof(int) * size);
	}
	Test & operator=(const Test &other) {
		cout << "Assignment Operator" << endl;
		cout << "Copy Constructor" << endl;
		m_pbuffer = new int[size] { };
		memcpy(m_pbuffer, other.m_pbuffer, sizeof(int) * size);

		return *this;
	}
	~Test() {
		cout << "Destructor Called" << endl;
		delete[] m_pbuffer;
	}
	friend ostream & operator<<(ostream &out, const Test &other);
};

ostream &operator<<(ostream & out, const Test & other) {
	return out;
}

int main() {
	cout << "Welocme to Overloading" << endl; // prints Welocme to Overloading
	return 0;
}
