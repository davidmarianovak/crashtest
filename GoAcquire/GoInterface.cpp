#include "GoInterface.hpp"

GoInterface::GoInterface()
{	

	std::vector<cTest> vC;
	for (unsigned int i = 0; i < 4; ++i)
	{
		qDebug() << "1-----------------------------------\n";
		cTest obj;
		vC.push_back(obj);
	}
	qDebug() << "t\n";
	std::vector<cSensorConstruct2> vC2;
	for (unsigned int i = 0; i < 4; ++i)
	{
		qDebug() << "2-----------------------------------\n";
		cSensorConstruct2 obj;
		vC2.push_back(obj);
	}
	qDebug() << "t\n";
	std::vector<cSensorConstruct> vC3;
	for (unsigned int i = 0; i < 4; ++i)
	{
		qDebug() << "3-----------------------------------\n";
		cSensorConstruct obj;
		vC3.push_back(obj);
	}
	qDebug() << "t\n";
}


GoInterface::~GoInterface()
{

}
