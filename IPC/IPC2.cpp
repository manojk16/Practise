//An exec function replaces the current process
//with a new process specified by the path or file argument you  can use exec function to handoff your current process
//with a new process specified by path or file argument 
// Fork() system call will generate identical process it will execute the same code but different data space
//Link process can cooperate 
//when fork() is executed a new process is created which is scheduled independently while we create a thread with in a new process 
//thread will have its own stack i.e. local varaible but shared gloabal varaibles like file discriptor, signal handler
// current directory state with the process that is created.