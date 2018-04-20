#ifndef INT_ARRAY_H
#define INT_ARRAY_H
#include <cassert>

class intArray{
private:
	int m_length;
	int *m_data;
public:
	intArray():m_length(0),m_data(nullptr){} //default constructor
	intArray(int length):m_length(length){  //Constructor
		assert(length >= 0);
		if(length>=0){
			m_data = new int[length];		 
		}
		else{
			m_data = nullptr;
		}
	}

~ intArray(){
		delete [] m_data;
	}

	void erase(){

	delete [] m_data;
	m_data=nullptr;
	m_length=0;

		}
	int& operator [] (int index){
	return m_data[index];
	}

	int getLength(){
	return m_length;
	}

	void reallocate(int newLength){
		erase();
		if(newLength <=0){
			return; 
		}
		m_data = new int[newLength];
		m_length=newLength;	
	}
	//resize to new length
	void resize(int newLength){
	 	if(m_length==newLength){
	 		return;
	 	}
	 	if(newLength <=0){
	 		erase();
	 	}
	 	//Now New lenght have some vaslue

	 	int *data = new int[newLength];
	 	if(m_length > 0){
	 		int elementsToCopy = (newLength > m_length) ? m_length : newLength;
	 		for(int index=0;index<elementsToCopy;++index){
	 			data[index]=m_data[index];
	 		}
	 	}
	 	delete [] m_data;
	 	m_data = data;
	 	++m_length;
	}
	void remove(int index){

		if(m_length==1){
			erase();
		}

		int *data = new int[m_length-1];
		//copy all elements up to the index

		for(int before =0 ; before < index ; ++ before){
			data[before]=m_data[before];
		}
		//copy all the element after the index 

		for(int after = index+1 ; after < m_length;++after){
			data[after-1]=m_data[after];
		}
		delete [] m_data;
		m_data=data;
		--m_length;
	}
};

#endif
