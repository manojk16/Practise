/*
 * main.cpp
 *
 *  Created on: 11-Jun-2018
 *      Author: manoj
 */




#include <iostream>
#include "Subject.h"
#include "Observer.h"
#include "WeatherData.h"
#include "CurrentconditionDisplay.h"
#include "TemperaturOnDisplay.h"


int main()
{
	Weather::weatherData wd;
	Weather::CurrentconditionDisplay ccd=Weather::CurrentconditionDisplay(&wd);

	Weather::TemperatureOnDisplay tod = Weather::TemperatureOnDisplay(&wd);


	wd.setMeasurment(3, 2, 1);
	wd.removeObserver(&tod);
	wd.setMeasurment(4, 5, 6);

    return 0;
}

