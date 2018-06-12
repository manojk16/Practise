#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <string.h>

void *thread_func(void* arg);
char message[]="Hello World";
int main()
{


	int res;
	pthread_t a_thread;
	void* thread_result;
	res=pthread_create(&a_thread, NULL, thread_func, (void*)message);
	if (res!=0)
	{
		perror("thread creation failed ");
		exit(EXIT_FAILURE);	
	}
	printf("Waiting for thread to finish>>");
	res=pthread_join(a_thread, &thread_result);
	if(res!=0)
		{
		perror("Join failure");
		exit(EXIT_FAILURE);
		}
		printf("ThreadJoined, it returns%s", (char*)thread_result);
		printf("message is Now %s\n",message );
		exit(EXIT_SUCCESS);
}

void* thread_func(void* arg)
{
	printf("Thread function is running. Argument was  %s\n",(char* )arg);
	sleep(3);
	strcpy(message,"BYE!");
	pthread_exit("Thanking You for CPU time ");


}