/*
 * CurrentconditionDisplay.h
 *
 *  Created on: 11-Jun-2018
 *      Author: manoj
 */
#ifndef __CURRENTCONDITIONSDISPLAY_H__
#define __CURRENTCONDITIONSDISPLAY_H__
#include "WeatherData.h"
#include "displayElement.h"
#include "Observer.h"

namespace Weather{

class CurrentconditionDisplay:public Observer, public DisplayElement{

private:
	weatherData *WeatherData;
	int temp;
	int humidity;
	int pressure;
public:
	CurrentconditionDisplay(weatherData *wd){
		WeatherData=wd;
		wd->registerObserver(this);
	}
	void update(){
		temp=WeatherData->getTemp();
		pressure=WeatherData->getPressure();
		humidity=WeatherData->getHumidity();
		display();

	}
	void display(){
		cout << "CurrentConditionsDisplay displaying:" << endl;
		cout << "Temperuture: " << temp << endl;
		cout << "Humidity: " << humidity << endl;
		cout << "Pressure: " << pressure << endl;
		cout << endl;
	}
};
}


#endif




