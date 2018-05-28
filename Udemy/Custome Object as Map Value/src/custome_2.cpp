/*
 * custome_2.cpp
 *
 *  Created on: 02-May-2018
 *      Author: manoj
 */
#include <iostream>
#include <map>
#include <string>
using namespace std;
// This is different from the previous one here we are taking key as Object of the class
/* There are two things.
 * 1. When we run the program just by exchanging the key and values means now Key is the object of the class and value is the constant value
 * and We are going to call the function it->second.print(), compiler throws an error by because it is expecting some constant value at the key
 * but this print this error goes away once we make print function as const
 *2. After Making this function as Const it is giving below error:
 *error: no match for ‘operator<’ (operand types are ‘const Person’ and ‘const Person’)
 *Means we have to overload this operetor
 *
*3. What Will happen if we try to add new oBject with the same key
* Ans: We update the value in the Map, If we have the already existing key in the map and we want to insert same key with different value it will
* update the Value but not the key itself
*
*
 *
 *
 */
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
		//cout << "In Default constructor count = " << count << endl;
	}
	Person(const Person& obj) {
		count++;
		//cout << "In Copy constructor count = " << count << endl;
		name = obj.name;
		age = obj.age;
	}
	Person(string name, int age) :
			name(name), age(age) {
		count++;
		//cout << "In Parameter constructor count = " << count << endl;
	}

	void print() const{
		cout << "Name -> " << name << ", " << "Age--->" << age << flush;
		cout<<"\n";
	}
 bool operator<(const Person &other) const{
	// return name < other.name;
	 if(name==other.name){
		 return age < other.age;
	 }
	 else{
		 return name < other.name;
	 }
 }
};

int Person::count = 0;
int main() {
	//cout << "Customer Object as Map Value" << endl; // prints Custom Object as Map Value

	//map<int, Person> people;
	map<Person, int> people;

	people[Person("mike", 40)] = 40;
	people[Person("mike", 444)] = 123;// To handle this case we have to write the age aslo in the < operator overloading with if else
	people[Person("sue", 30)] =  30;
	people[Person("raj", 20)] =  20;

//people.insert(make_pair(5,Person("Rinnku",45)));

	for (map<Person, int>::iterator it = people.begin(); it != people.end();
			it++) {
		cout << it->second << " : " << flush;
		it->first.print();

	}
	return 0;
}