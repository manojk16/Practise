// How to achieve the Run Time Polymorphism 
// Vptr always initiallize inside the constructor 
//vptr is always the member variable of the class 
// Here Onething is clear we cant make constructor as virtual then its entry will be in Vtable the how to /*inilialize the vptr
We can make distructor as virtual because thee is n o concept of vptr initialization
Vtable: is the table which is used to achioeve at run time polymorphism which is created by the compiler at compile time this table having the entries of vfuntion and a vptr is also created at compile time which is initilize in the constructor having the address of this vtable.*/

