/*
 * Day21.cc
 *
 *  Created on: 23-May-2018
 *      Author: manoj
 */

/*
Today we're discussing Generics; be aware that not all languages support this construct,
so fewer languages are enabled for this challenge. Check out the Tutorial tab for learning

materials and an instructional video!
Task

Write a single generic function named printArray; this function must take an array of generic
elements as a parameter (the exception to this is C++, which takes a vector). The locked Solution
class in your editor tests your function.

Note: You must use generics to solve this challenge. Do not write overloaded functions.
Input Format

There is no input for this challenge. The locked Solution class in your editor will pass two different
types of arrays to your printArray function.

Constraints
You must have exactly 1 function named printArray.

Output Format
Your printArray function should print each element of its generic array parameter on a new line.
*/

#include <iostream>
#include <vector>

using namespace std;


template<class Generic>
void printArray(vector<Generic> array){
	for(int i=0;i<array.size();i++){
			cout<<array[i]<<endl;
	}
}


int main(){
	vector<int> vect{1,2,3};
	vector<string> vect1{"Hello", "World"};
	printArray<int>(vect);
	printArray<string>(vect1);
	return 0;
}
