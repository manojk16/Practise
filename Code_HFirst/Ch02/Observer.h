/*
 * Observer.h
 *
 *  Created on: 11-Jun-2018
 *      Author: manoj
 */


#ifndef _OBSERVER_H_
#define _OBSERVER_H_

namespace Weather{

class Observer{
public:

	virtual void update()=0;
};

}

#endif


