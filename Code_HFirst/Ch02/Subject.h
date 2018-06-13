/*
 * Subject.h
 *
 *  Created on: 11-Jun-2018
 *      Author: manoj
 */

#ifndef _SUBJECT_H_
#define _SUBJECT_H_
#include "Observer.h"
namespace Weather{
class Subject{
public:
	virtual void registerObserver(Observer *ob)=0;
	virtual void removeObserver(Observer *ob)=0;
	virtual void notifyObservers()=0;
};
}

#endif

