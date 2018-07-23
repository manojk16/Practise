#include <iostream>
#include <thread>
#include <condition_variable>


// With Condition variable there are wait() , notify_one() and notify_all()

#include <mutex>

using namespace std;

class evenodd{
	// bool varaible;
	mutex m_mutex;
	condition_variable m_condVar;
	int count;
	public:

	evenodd(){
		int count =0;
	}
	void printeven(){
		for(;;)
	}

	void printiodd(){
		
			for(int i=1;i<100;i=i+2){
			  std::unique_lock<std::mutex> lck(m_mutex);
			  m_condVar.wait(lck);
			 cout<<i<<" ";
		}	
		
	}
};


int main(){
	evenodd obj;

	thread t1(&evenodd::printeven, &obj);
	thread t2(&evenodd::printiodd, &obj);
	t2.join();
	t1.join();
	cout<<endl;
	return 0;
}