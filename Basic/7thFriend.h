/*
 * 7thFriend.h
 *
 *  Created on: 13-Apr-2018
 *      Author: manoj
 */

#ifndef FRIEND_H
#define FRIEND_H


class Distance{

int m_distance;

public:

int show(Distance&);
friend int access(Distance&);
};



class Road{
	int m_show;
public:
	int show2(Road&);
};

#endif





