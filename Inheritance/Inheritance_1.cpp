#include <iostream>

using namespace std;

class vehicle{
public:
	vehicle(){
		cout << "This is a vehicle"<<endl;
		cout <<"Object of derived class is created constructor of the base class is called"<<endl;
	}

};

class car:public vehicle{
public:
	car():vehicle(){
		cout << "It is a car"<<endl;
	}
};


int main(){

	car obj_car;
	return 0;
}