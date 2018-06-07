//============================================================================
// Name        : compositon.cpp
// Author      : Manoj
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
/*
part-of,has-a, is-a, uses-a, depends-upon, member-of

*/
//============================================================================
/*
||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
|**************************************Composition*******************************|
The complex object is made from Simpler and smaller object.This process of building Complex object from simpler ones is called the composition
Object Composition Model has-a relationship between two Objects, A car "has-a" transmission, Computer has-a CPU,
||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
TO qualify as a composition, an object and a part must have the following relationship
1. The part(member) is a part of the object(class)
2. The part(member) can only belongs to one object(class) at a time
3. The part(member) has its existence managed by object(class)
4. The part(member) does not now about the existence of the object(class)
*/

#include <iostream>
#include <cstring>
using namespace std;

/*
class Engine{
public:
	int power;
};
class Car{
public:
	Engine *e;
	string Company;
	string color;
	void show_details(){
		cout<<"Car Brand Name is " << Company <<endl;
		cout << "Car Color is " << color <<endl;
	}
};



int main() {
	Car c;
	c.e->power=1500;
	c.Company="Honda";
	c.color="Silver";
	c.show_details();
	cout << "Composition" << endl; // prints Composition
	return 0;
}
*/

class Student;



class Department{
	char *name_p;

public:
	Department(char *dname){
		cout<<"Department ctor\n";
		name_p=new char(sizeof(strlen(dname)));
		name_p=dname;
	}
	char *dname() const{
		return(name_p);
	}
	~Department(){
		cout<<"Department :: ctor\n";
		delete(name_p);
	}
};

class Student{
	char *name_p;
public:
	Student(char *sname){
		cout<<"Student :: ctor "<<endl;
		name_p=new char(sizeof(strlen(sname)));
		name_p=sname;
	}
	char *sName() const{
		return(name_p);
	}
	~Student(){
		cout<<"Student :: dtor"<<endl;
		delete(name_p);
	}

};
class Course{
	Student *std_p;
	Department *dept_p;
	char *courseName_p;
	static unsigned int index;
	static Course *courseList[4];
public:
	Course(char *courseName, Student *student,Department *dept):courseName_p(0),std_p(student),dept_p(dept){
		cout<<"Coutrse Ctor"<<endl;
		if(index<4){
			courseName_p=new char(sizeof(strlen(courseName)));
			courseName_p=courseName;
			courseList[index]=this;
			++index;
		}
		else{
			cout<<"CanNt accomadate any More Course\n";
		}

	}
	 ~Course()
	    {
	      cout<<"Course:dtor\n";
	      delete (courseName_p);
	    }
	  static char* findStudent(char *crseName, char* deptName)
	    {
	      for(int i=0; i<index; i++)
	      {
	        if ( (courseList[i]->getCourseName() == crseName) &&
	             (courseList[i]->getDeptName() == deptName) )
	        {
	          return(courseList[i]->getStdName());
	        }
	      }
	    }
	  char * getStdName()const {return(std_p->sName());};
	      char * getDeptName() const {return(dept_p->dname());};
	      char * getCourseName()const {return(courseName_p);};
};
unsigned int Course::index =0;
Course* Course::courseList[4] = {0,0,0,0};



int main()
{
  int i;

  cout<<"\nExample of Association class...\n";
  cout<<"-----------------------------------\n\n";

  cout<<"We have got 4 students ...\n";
  Student *studentNames[4] = {new Student("Meera"), new Student("Moina"), new Student("Teena"), new Student("Mridula")} ;

  cout<<"\n";

  cout<<"We have got 2 Departments...\n";
  Department *departNames[2] = {new Department("Mathemetics"), new Department("ComputerSceince")} ;

  cout<<"\n";

  cout<<"Here class Course Associates Student and Department, with a Course name ...\n";
  Course course1("DataStructure",studentNames[0], departNames[1]);
  Course course2("Maths",studentNames[3], departNames[0]);
  Course course3("Geometry",studentNames[2], departNames[0]);
  Course course4("CA",studentNames[1], departNames[1]);

  cout<<"\n";

  cout<<"Finding a Student using Course and Department...\n";
  cout<<"Student who has taken Maths Course in Mathemetics Department is:"<<Course::findStudent("Maths", "Mathemetics")<<endl;

  cout<<"\n";

  cout<<"Deletion of objects...\n\n";

  for(i=0; i<4; ++i)
  {
    delete studentNames[i];
  }

  cout<<"\n";

  for(i=0; i<2; ++i)
  {
    delete departNames[i];
  }

  cout<<"\n";

  return(0);
}
