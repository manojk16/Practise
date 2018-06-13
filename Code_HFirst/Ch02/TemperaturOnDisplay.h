/*
 * TemperaturOnDisplay.h
 *
 *  Created on: 11-Jun-2018
 *      Author: manoj
 */

#ifndef __TEMPERATUREONLYDISPLAY_H__
#define __TEMPERATUREONLYDISPLAY_H__

#include "WeatherData.h"
#include "displayElement.h"


namespace Weather{

using std::cout;
using std::endl;
class TemperatureOnDisplay:public Observer, public DisplayElement{
private:
	weatherData *WeatherData;
	int temp;
	int humidity;
	int pressure;

public:

	TemperatureOnDisplay(weatherData *wd){

		WeatherData=wd;
		wd->registerObserver(this);
	}
	void update(){
		temp=WeatherData->getTemp();
		display();
	}
	void display(){
		cout << "TemperatureOnlyDisplay displaying:" << endl;
		cout << "Temperuture: " << temp << endl;
		cout << endl;
	}

};
}


#endif


