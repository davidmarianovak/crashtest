#ifndef GOINTERFACE_HPP_
#define GOINTERFACE_HPP_

#include <vector>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <QtWidgets/QtWidgets>
#include <map>

#include "dataStructs.hpp"

class GoInterface : public QObject
{
	Q_OBJECT
public:
	GoInterface();
	~GoInterface();

signals:	
	void fillGraphicsViews(std::vector<cSensorConstruct> vSens);
	void pushProfileToGraphicsView(std::vector<std::pair<double, double>> Dat, int Sensor);

};


#endif // GOINTERFACE_HPP_