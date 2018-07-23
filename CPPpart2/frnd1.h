#ifndef _DISTANCE_
#define _DISTANCE_



class Distance
{

private:
	int meter;
public:
	int KM;

	friend int access(Distance&);// In the friend function there should be at least one argument to the object
public:
	void show();
	int accessproperties
};
#endif
//Name Mangling 