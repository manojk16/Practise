/* Semaphore, Mutex, critical section, principle of lock & unlock	; 	26-Jan-2016	*/

#include<iostream>
#include<pthread.h>
#include<unistd.h>
#include<semaphore.h>
using namespace std;


int gl_var=123;

sem_t sem1;
int count=0;// if count is zero i.e. semaphore is shared between threads of a process 
int ret=sem_init(&sem1,count,4);		//sem_init(&sem1,0,3);// returns 0 on successfully unnamed semaphore 
			// here 4 is the initial valuer of the semaphore 

void* work1(void* ptr)
{
	for(int i=0;i<3000;i++)
	{
		sem_wait(&sem1);
		gl_var++;
		cout<<"Inside thread1------ "<<i<<endl;
		sem_post(&sem1);
		
	}
	
}

void* work2(void* ptr)
{
	for(int i=0;i<3000;i++)
	{
		sem_wait(&sem1);// it decrements the semaphore pointed by sem1
		gl_var--;
		cout<<"Inside thread2----------- "<<i<<endl;
		sem_post(&sem1);
		
	}	
}


int main()
{
	pthread_t thread1;
	pthread_t thread2;
	pthread_create(&thread1,NULL,work1,NULL);
	pthread_create(&thread2,NULL,work2,NULL);
	
	return 0;
}
