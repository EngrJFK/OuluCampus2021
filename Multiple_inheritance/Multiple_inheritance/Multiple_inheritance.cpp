// Multiple_inheritance.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "sstream"

using namespace std;

class vehicle
{
public: 
	vehicle()
	{
		cout << "This is a vehicle" << endl;

	}

};

//second base class

class FourWheeler

{
public: 
	FourWheeler()

	{
		cout << "This is a 4 wheeler vehicle" << '\n';
	}
};

class car : public vehicle, public FourWheeler
{
	
};

int main()
{

	car obj;
	system("pause");
    return 0;
}

