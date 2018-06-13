/*
 * WeatherData.h
 *
 *  Created on: 11-Jun-2018
 *      Author: manoj
 */
#ifndef _WEATHER_H_
#define _WEATHER_H_
#include <iostream>
#include <vector>
#include <algorithm>
#include "Observer.h"
#include "Subject.h"
namespace Weather{

using std::cout;
using std::endl;
class weatherData:public Subject{
private:
	int temp;
	int humidity;
	int pressure;
	std::vector<Observer *> observers;
public:
	weatherData():temp(0),humidity(0),pressure(0){}
	void registerObserver(Observer *ob){
		observers.push_back(ob);
	}
	void removeObserver(Observer *ob){
		std::vector<Observer *>::iterator found=std::find(observers.begin(),observers.end(),ob);
		if(found!=observers.end()){
			observers.erase(found);
		}
	}
	void notifyObservers(){
		for(std::vector<Observer *>::iterator itr=observers.begin();itr!=observers.end();itr++){
			(*itr)->update();
		}
	}
	int getTemp(){
		return temp;
	}
	int getPressure(){
		return pressure;
	}
	int getHumidity(){
		return humidity;
	}

	void measurementChanged(){
		notifyObservers();
	}
	void setMeasurment(int t=1, int h=2, int p=3){
		temp=t;
		humidity=h;
		pressure=p;
		measurementChanged();
	}
};
}

#endif


