// Event Handle using threads 


#include <iostream>
#include <thread>

#include <mutex>

using namespace std;


class Appliction
{
	mutex m_mutex;
	bool m_loadData;

public:
	Appliction(){
		m_loadData=false;
	};

	void loaddata(){
		std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		cout<<"Loading data from XML"<<endl;
		lock_guard<mutex> guard(m_mutex);
		m_loadData=true;
	}
	void mainTask(){
		cout<<"Do some handshaking "<<endl;
		//lock_guard<mutex> guard(m_mutex);
		m_mutex.lock();
		while(m_loadData!=true){
			m_mutex.unlock();
			std::this_thread::sleep_for(std::chrono::milliseconds(100));
			m_mutex.lock();
		}
		m_mutex.unlock();
		cout<<"Do processing on loaded Data"<<endl;
	}
	~Appliction(){};
	
};

int main(){
	Appliction app;
	thread t1(&Appliction::mainTask, &app);
	thread t2(&Appliction::loaddata,&app);

	t1.join();
	t2.join();
	return 0;
}