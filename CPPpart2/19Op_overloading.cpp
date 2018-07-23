//An exec function replaces the current process
//with a new process specified by the path or file argument you  can use exec function to handoff your current process
//with a new process specified by path or file argument 
// Fork() system call will generate identical process it will execute the same code but different data space
//Link process can cooperate 
//when fork() is executed a new process is created which is scheduled independently while we create a thread with in a new process 
//thread will have its own stack i.e. local varaible but shared gloabal varaibles like file discriptor, signal handler
// current directory state with the process that is created.
// Synchronization problem can be shared by Semaphore and Mutex both are similiar how ever one is more expressive 
in comparision to other
MUTEX: controlling access to some shared memory when only one thread can take enttry
HOW EVER CONTROLLING access excess to a set of identical object as a whole such as giving a telephone line 
out of five available