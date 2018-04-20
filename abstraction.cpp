#include <iostream>
using namespace std;

class Abstraction{
private :

	int x;
public:
	void set(int m){
		x=m;
	}
	int get(){

		return x;
	}
void display(){
	cout << "Value of x::" << x <<endl;
}
};


int main(){

	Abstraction obj;
	obj.set(20);
	obj.display();

	return 0;
}