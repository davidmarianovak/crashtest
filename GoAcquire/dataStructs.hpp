#ifndef DATASTRUCTS_HPP_
#define DATASTRUCTS_HPP_

#include <boost/circular_buffer.hpp>
class cTest
{
public:
	boost::circular_buffer<std::vector<std::pair<double, double>>> circDat;

	cTest() : circDat(1000)
	{
	}
};



class cSensorConstruct
{
	public:
		// 0 = GO_ROLE_MAIN, 1 = GO_ROLE_BUDDY
		int iRole;
		// 0 = GO_EXPOSURE_MODE_SINGLE, 1 = GO_EXPOSURE_MODE_MULTIPLE, 2 = GO_EXPOSURE_MODE_DYNAMIC
		int iMode;
		short shBank;
		bool bDigitalOutConnection;
		std::string stIP;
		unsigned int uiSerialnumber;
		bool bDataVectorReceived;
		boost::circular_buffer<std::vector<std::pair<double, double>>> circDat;

		cSensorConstruct(int Role, int Mode, short Bank, bool DigitalOut,
			std::string IP, unsigned int Serial, bool DataReceived, boost::circular_buffer<std::vector<std::pair<double, double>>> Dat) :
			iRole(Role),
			iMode(Mode),
			shBank(Bank),
			bDigitalOutConnection(DigitalOut),
			stIP(IP),
			uiSerialnumber(Serial),
			bDataVectorReceived(DataReceived),
			circDat(Dat)
		{}

		cSensorConstruct() : 
			iRole(0),
			iMode(0),
			shBank(-1),
			bDigitalOutConnection(false),
			uiSerialnumber(0),
			bDataVectorReceived(false),
			circDat(1000)
		{
		}
};

class cSensorConstruct2
{
public:
	// 0 = GO_ROLE_MAIN, 1 = GO_ROLE_BUDDY
	int iRole;
	// 0 = GO_EXPOSURE_MODE_SINGLE, 1 = GO_EXPOSURE_MODE_MULTIPLE, 2 = GO_EXPOSURE_MODE_DYNAMIC
	int iMode;
	short shBank;
	bool bDigitalOutConnection;
	std::string stIP;
	unsigned int uiSerialnumber;
	bool bDataVectorReceived;
	boost::circular_buffer<std::vector<std::pair<double, double>>> circDat;

	cSensorConstruct2(int Role, int Mode, short Bank, bool DigitalOut,
		std::string IP, unsigned int Serial, bool DataReceived, boost::circular_buffer<std::vector<std::pair<double, double>>> Dat) :
		iRole(Role),
		iMode(Mode),
		shBank(Bank),
		bDigitalOutConnection(DigitalOut),
		stIP(IP),
		uiSerialnumber(Serial),
		bDataVectorReceived(DataReceived),
		circDat(Dat)
	{}

	cSensorConstruct2() : 
		iRole(0),
		iMode(0),
		shBank(-1),
		bDigitalOutConnection(false),
		uiSerialnumber(0),
		bDataVectorReceived(false),
		circDat(1000)
	{
	}
};


#endif /* DATASTRUCTS_HPP_ */
