//============================================================================
// Name        : Aggregation.cpp
// Author      : Manoj
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
/*
 * it is a type of composition;
 * In aggregation a whole object or its part must qualify following relationship
 *1. The part is part of the part
 *2. The part can belong more than one object at a time
 *3. The part doesn't have its existence managed by the object
 *4. The part doesn't know about the existence of the object
 *5. Unidirectional relationship
 *6. Unlike an object can belongs to more than one object at a time
 like : A car Engine is a prt ofg the car and it's itself is the part of the Man who own the car
A person has a home address same Address can be hold by more then person


Aggregation Model has-arelation ship like A department has a Teacher and A car has a Engine
Because aggregations are similar to compositions in that they are both part-whole relationships, they are implemented almost
identically, and the difference between them is mostly semantic. In a composition, we typically add our parts to the composition
using normal member variables (or pointers where the allocation and deallocation process is handled by the composition class).


In  aggregation we also add parts as member variable How ever these varaible either reference  or pointer varaible that are used to point at object that have been vreated outside the object of the class
consequently an aggregation ususally takes either takes the object it is goint to point to as constructor {} param.
Because these exist outside the class so when class destroyed these also destoryed but not deleted



 *

*/
#include <iostream>

using namespace std;

class Teacher{
	string m_name;
public:

Teacher(string name):m_name(name){

}
string getName(){
	return m_name;
}
};
class Department{
private:
	Teacher *m_teacher;// This department hold only one teacher for simplicity but it can have more then one teacher
public:
	Department(Teacher *teacher=NULL):m_teacher(teacher){

	}
	~Department(){
		cout << "Delete the department"<<endl;

	}
};

int main() {
	cout << "Aggregation" << endl; // prints Aggregation
	// Create A teacher outside the scope of Department
	Teacher *teacher = new Teacher("Bob");
	// Create a Department and use the constructor parameter to pass the teaacher to it
	{
	Department *dept=new Department(teacher);
	cout<<"Going to delete the Department "<<endl;
	delete dept;
	cout<<"deleted "<<endl;

	} // Department goes out of scope here and destroyed
	// Teacher still exist because dept does not delete the teacher
	cout << teacher->getName()<< " Still Exist "<<endl;
	delete teacher;
	return 0;
}
