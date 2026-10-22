// Name: JUSTIN ONG JUN HAO    Matric No.: B032610226    Section: S2G2

#include <iostream>
using namespace std;

int main() 
{
	int batteryPercentage, 
	bool chargingStatus;
	bool batterySaverStatus;

	//INPUT
	cout << "Enter battery percentage (0-100): ";
	cin >> batteryPercentage;
	cout << "Enter charging status (0 for not charging, 1 for charging): ";
	cin >> chargingStatus;

	//PROCCESS
	batterySaverStatus = (batteryPercentage < 20) && !chargingStatus;
}