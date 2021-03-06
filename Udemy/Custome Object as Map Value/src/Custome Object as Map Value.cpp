//============================================================================
// Name        : Custome.cpp
// Author      : Manoj
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <map>
#include <string>
using namespace std;

// Map shows the object in a particular order
class Person {
	string name;
	int age;
	static int count;
public:
	//  WithOut Defualt constructor it is not working s
	/*Person(){name ="";
	 Here object is initialized by the non parameterized object and vale will be assigned as per the defult assignment operator
	 age=0;}*/

	Person() :
			name(""), age(0) {

		count++;
		cout << "In Default constructor count = " << count << endl;
	}
	Person(const Person& obj) {
		count++;
		cout << "In Copy constructor count = " << count << endl;
		name = obj.name;
		age = obj.age;
	}
	Person(string name, int age) :
			name(name), age(age) {
		count++;
		cout << "In Parameter constructor count = " << count << endl;
	}

	void print() {
		cout << "Name -> " << name << ", " << "Age--->" << age << endl;
	}

};

int Person::count = 0;
int main() {
	cout << "Customer Object as Map Value" << endl; // prints Custom Object as Map Value

	map<int, Person> people;

	people[0] = Person("mike", 40);
	people[1] = Person("Janne", 60);
	people[2] = Person("Jenne", 70);

//people.insert(make_pair(5,Person("Rinnku",45)));

	for (map<int, Person>::iterator it = people.begin(); it != people.end();
			it++) {
		cout << it->first << " : " << flush;
		it->second.print();

	}
	return 0;
}
