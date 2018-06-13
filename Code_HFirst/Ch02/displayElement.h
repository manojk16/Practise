/*
 * displayElement.h
 *
 *  Created on: 11-Jun-2018
 *      Author: manoj
 */

#ifndef __DISPLAYELEMENT_H__
#define __DISPLAYELEMENT_H__

namespace Weather
{

class DisplayElement
{
public:
	virtual void display() = 0;
	virtual ~DisplayElement(){}
};
}

#endif



