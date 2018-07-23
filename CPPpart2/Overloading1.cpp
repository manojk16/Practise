//operatoroverloading:It is a part of polymorphism at compile time 
//polymorphism can be divided in to 2 parts 
//1 compile polymorphism : (i) Function Overloading: When a Function has one or more def in the scope  (ii) Operator Overloading Whn Opeaotr applying on useerdefined data types2. Run time polymorphism

class TimeInterval
{
	int minute;
	int second;
	void show();
	{
		cout<<"MInute:"<<minute<<"Second::"<<second<<endl;
	}
};