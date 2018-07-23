#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

void * PrintHello(void * data)
{

    pthread_t tid;
    tid = pthread_self();
    int my_data = (int)data;  

    printf("\n Hello from new thread - got%d ! and  thread id is %u\n", my_data,tid);
    pthread_exit(NULL);
}

int main()
{
    int rc;
    pthread_t thread_id;
    pthread_t tid;
    int t = 11;
    tid = pthread_self();
    rc = pthread_create(&thread_id, NULL, PrintHello, (void*)t);
    if(rc)
    {
      printf("\n ERROR: return code from pthread_create is %d and main Thread id is %u\n", rc, tid);
      exit(1);
    }
    printf("\n Created new thread (%u)... \n", thread_id);
    join();

    pthread_exit(NULL);
}
